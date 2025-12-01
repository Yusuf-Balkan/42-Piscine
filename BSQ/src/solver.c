/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:23:40 by ybalkan          #+#    #+#              */
/*   Updated: 2025/11/26 09:23:41 by ybalkan         ###   ########.tr        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	min3(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}

static int	cell(t_map *m, int *dp, int i, int j)
{
	if (m->data[i * m->cols + j] == m->obst)
		return (0);
	if (i == 0 || j == 0)
		return (1);
	return (1 + min3(dp[(i - 1) * m->cols + j],
			dp[i * m->cols + (j - 1)],
			dp[(i - 1) * m->cols + (j - 1)]));
}

static void	update(t_map *m, int v, int i, int j)
{
	if (v > m->best_size)
	{
		m->best_size = v;
		m->best_i = i;
		m->best_j = j;
	}
}

void	solve_map(t_map *m)
{
	int	*dp;
	int	i;
	int	j;
	int	v;

	if (!m || m->rows <= 0 || m->cols <= 0)
		return ;
	dp = malloc(sizeof(int) * m->rows * m->cols);
	if (!dp)
		return ;
	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->cols)
		{
			v = cell(m, dp, i, j);
			dp[i * m->cols + j] = v;
			update(m, v, i, j);
			j++;
		}
		i++;
	}
	free(dp);
}

void	fill_solution(t_map *m)
{
	int	s;
	int	si;
	int	sj;
	int	i;
	int	j;

	s = m->best_size;
	if (s <= 0)
		return ;
	si = m->best_i - s + 1;
	sj = m->best_j - s + 1;
	i = 0;
	while (i < s)
	{
		j = 0;
		while (j < s)
		{
			m->data[(si + i) * m->cols + (sj + j)] = m->full;
			j++;
		}
		i++;
	}
}
