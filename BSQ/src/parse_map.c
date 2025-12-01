/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:32:58 by ybalkan          #+#    #+#              */
/*   Updated: 2025/11/26 09:32:59 by ybalkan         ###   ########.tr        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	parse_header(char *buf, int *hlen, t_map *m)
{
	int	i;
	int	numlen;

	if (!buf)
		return (-1);
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] != '\n')
		return (-1);
	if (i < 4)
		return (-1);
	if (set_header_values(buf, i, m) < 0)
		return (-1);
	numlen = i - 3;
	m->rows = ft_atoi_n(buf, numlen);
	if (m->rows <= 0)
		return (-1);
	*hlen = i + 1;
	return (0);
}

static int	get_cols(char *buf, int start)
{
	int	c;

	if (!buf[start])
		return (-1);
	c = 0;
	while (buf[start + c] && buf[start + c] != '\n')
		c++;
	if (buf[start + c] != '\n')
		return (-1);
	if (c <= 0)
		return (-1);
	return (c);
}

static int	fill_row(char *buf, t_map *m, int *p, int r)
{
	int	c;
	int	i;

	c = 0;
	i = *p;
	while (c < m->cols)
	{
		if (!buf[i])
			return (-1);
		if (buf[i] == '\n')
			return (-1);
		if (buf[i] != m->empty && buf[i] != m->obst)
			return (-1);
		m->data[r * m->cols + c] = buf[i];
		i++;
		c++;
	}
	if (buf[i] != '\n')
		return (-1);
	*p = i + 1;
	return (0);
}

static int	read_body(char *buf, t_map *m, int start)
{
	int	r;
	int	p;

	p = start;
	r = 0;
	while (r < m->rows)
	{
		if (fill_row(buf, m, &p, r) < 0)
			return (-1);
		r++;
	}
	if (buf[p] != '\0')
		return (-1);
	return (0);
}

int	parse_map(char *buf, t_map *m)
{
	int	hlen;

	if (!buf || !m)
		return (-1);
	if (parse_header(buf, &hlen, m) < 0)
		return (-1);
	m->cols = get_cols(buf, hlen);
	if (m->cols < 0)
		return (-1);
	m->data = malloc((size_t)m->rows * (size_t)m->cols);
	if (!m->data)
		return (-1);
	if (read_body(buf, m, hlen) < 0)
	{
		free(m->data);
		return (-1);
	}
	m->best_size = 0;
	m->best_i = 0;
	m->best_j = 0;
	return (0);
}
