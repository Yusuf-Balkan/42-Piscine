/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:11:17 by iuslu             #+#    #+#             */
/*   Updated: 2026/05/25 22:14:51 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

//----------MAIN----------//

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("Bolum: %d\n", a);
	printf("Kalan: %d\n", b);

	return (0);
}
