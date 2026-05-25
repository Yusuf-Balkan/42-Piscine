/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 05:47:44 by iuslu             #+#    #+#             */
/*   Updated: 2026/05/25 22:03:41 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
	printf("%d", swap);
}

//----------MAIN----------//

int 	main(void)
{
	int	a;
	int	b;
	
	a = 20;
	b = 5;
	ft_swap(&a, &b);
}
