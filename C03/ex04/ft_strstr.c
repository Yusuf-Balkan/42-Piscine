/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:51:02 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/22 16:03:44 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	y;
	int	b;

	if (to_find[0] == '\0')
		return (str);
	y = 0;
	while (str[y])
	{
		b = 0;
		while (str[y + b] == to_find[b] && to_find[b])
			b++;
		if (to_find[b] == '\0')
			return (&str[y]);
		y++;
	}
	return (0);
}
