/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:13:02 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/23 16:30:57 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		write(1, &str[y], 1);
		y++;
	}
}

int    main(void)
{
	ft_putstr("Havva");
}
