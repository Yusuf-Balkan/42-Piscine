/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:31:37 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/26 12:37:47 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_puterr(void)
{
	write(1, "map error\n", 10);
}

int	ft_atoi_n(const char *s, int n)
{
	long	res;
	int		i;

	if (!s || n <= 0)
		return (-1);
	res = 0;
	i = 0;
	while (i < n)
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);
		res = res * 10 + (s[i] - '0');
		if (res > 2147483647)
			return (-1);
		i++;
	}
	return ((int)res);
}

void	free_map(t_map *m)
{
	if (!m)
		return ;
	if (m->data)
		free(m->data);
	free(m);
}
