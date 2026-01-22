/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 01:11:07 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/24 01:25:12 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	y;
	int	b;

	y = 1;
	while (y < argc)
	{
		b = 0;
		while (argv[y][b])
		{
			write(1, &argv[y][b], 1);
			b++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (0);
}
