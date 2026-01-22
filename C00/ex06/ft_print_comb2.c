/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:40:09 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/14 19:23:59 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	y;
	int	b;

	y = 0;
	b = 0;
	while (y <= 99)
	{
		b = y + 1;
		while (b <= 99)
		{
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (y != 98 || b != 99)
			{
				write(1, &", ", 2);
			}
			b++;
		}
		y++;
	}
}
