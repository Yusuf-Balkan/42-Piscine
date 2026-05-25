/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:26:59 by iuslu             #+#    #+#             */
/*   Updated: 2026/05/25 22:12:13 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	return (y);
}

//----------MAIN----------//

#include <stdio.h>

int	main(void)
{
	char	str[] = "Merhaba";

	printf("%d", ft_strlen(str));

	return (0);
}