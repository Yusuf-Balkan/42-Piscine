/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 11:32:03 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/23 11:50:48 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	y;

	y = 0;
	if (argc >= 1)
	{
		while (argv[0][y])
		{
			write(1, &argv[0][y], 1);
			y++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
