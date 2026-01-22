/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:32:33 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/26 12:36:53 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(t_map *m)
{
	int	i;

	if (!m || !m->data)
		return ;
	i = 0;
	while (i < m->rows)
	{
		write(1, m->data + (i * m->cols), m->cols);
		write(1, "\n", 1);
		i++;
	}
}
