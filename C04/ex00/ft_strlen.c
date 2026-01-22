/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:05:12 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/23 16:29:09 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int    main(void)
{
	printf("%d", ft_strlen("Havva"));
}

