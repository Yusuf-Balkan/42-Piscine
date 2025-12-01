/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:33:45 by ybalkan          #+#    #+#              */
/*   Updated: 2025/11/26 09:34:03 by ybalkan         ###   ########.tr        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	set_header_values(char *buf, int i, t_map *m)
{
	m->empty = buf[i - 3];
	m->obst = buf[i - 2];
	m->full = buf[i - 1];
	if (m->empty == m->obst)
		return (-1);
	if (m->empty == m->full)
		return (-1);
	if (m->obst == m->full)
		return (-1);
	return (0);
}
