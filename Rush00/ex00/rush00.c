/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <zaaaaezikramiz.loser.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:24:05 by rammiza           #+#    #+#             */
/*   Updated: 2025/11/09 12:43:48 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	e;
	int	m;

	e = x;
	m = y;
	if (y <= 0 || x <= 0)
		return ;
	while (y >= 1)
	{
		while (x >= 1)
		{
			if ((x == 1 && 1 < y && y < m) || (x == e && 1 < y && y < m))
				ft_putchar('|');
			else if ((y == 1 && 1 < x && x < e) || (y == m && 1 < x && x < e))
				ft_putchar('-');
			else if (x != 1 && y != 1 && x != e && y != m)
				ft_putchar(' ');
			else
				ft_putchar('o');
			x--;
		}
		y--;
		ft_putchar('\n');
		x = e;
}
}
