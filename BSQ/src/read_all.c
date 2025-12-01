/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:30:58 by ybalkan          #+#    #+#              */
/*   Updated: 2025/11/26 11:27:15 by ybalkan         ###   ########.tr        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	copy_old(char *dst, char *old, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = old[i];
		i++;
	}
}

static void	append_buf(char *dst, char *buf, int start, int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		dst[start + i] = buf[i];
		i++;
	}
	dst[start + r] = '\0';
}

static char	*grow(char *old, char *buf, int len, int r)
{
	char	*new;

	new = malloc(len + r + 1);
	if (!new)
	{
		if (old)
			free(old);
		return (NULL);
	}
	if (old)
		copy_old(new, old, len);
	append_buf(new, buf, len, r);
	if (old)
		free(old);
	return (new);
}

static int	read_chunk(int fd, char **out, int *len)
{
	char	buf[4096];
	int		r;

	r = read(fd, buf, 4096);
	if (r <= 0)
		return (0);
	*out = grow(*out, buf, *len, r);
	if (!*out)
		return (-1);
	*len += r;
	return (1);
}

char	*read_all(char *path)
{
	char	*out;
	int		fd;
	int		len;
	int		st;

	out = NULL;
	len = 0;
	if (path == NULL)
		fd = 0;
	else
		fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	st = read_chunk(fd, &out, &len);
	while (st == 1)
		st = read_chunk(fd, &out, &len);
	close(fd);
	if (st == -1)
		return (NULL);
	return (out);
}
