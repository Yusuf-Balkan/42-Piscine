/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:37:08 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/23 16:42:20 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	y;
	int	sign;
	int	result;

	y = 0;
	sign = 1;
	result = 0;
	while (str[y] == ' ' || (str[y] >= 9 && str[y] <= 13))
		y++;
	while (str[y] == '+' || str[y] == '-')
	{
		if (str [y] == '-')
			sign = -sign;
		y++;
	}
	while (str[y] >= '0' && str[y] <= '9')
	{
		result = result * 10 + (str[y] - '0');
		y++;
	}
	return (result * sign);
}

int    main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
}

