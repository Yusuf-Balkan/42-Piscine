/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 04:28:07 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/22 04:41:09 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] < 32 || str[y] > 126)
			return (0);
		y++;
	}
	return (1);
}
