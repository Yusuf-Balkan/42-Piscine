/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:27:49 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/25 14:42:32 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_prime(int nb)
{
	int	y;

	if (nb <= 1)
		return (0);
	y = 2;
	while (y * y <= nb)
	{
		if (nb % y == 0)
			return (0);
		y++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_find_prime(nb))
		nb++;
	return (nb);
}
