/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 07:13:42 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/22 15:40:17 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	y;
	int	b;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[y] = src[b];
		y++;
		b++;
	}
	dest[y] = '\0';
	return (dest);
}
