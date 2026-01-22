/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 06:32:22 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/22 07:12:56 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	y;

	y = 0;
	if (n == 0)
		return (0);
	while ((s1[y] != '\0' || s2[y] != '\0') && y < n)
	{
		if (s1[y] != s2[y])
			return (s1[y] - s2[y]);
		y++;
	}
	return (0);
}
