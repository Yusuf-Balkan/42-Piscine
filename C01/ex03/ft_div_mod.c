/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:21:14 by iuslu             #+#    #+#             */
/*   Updated: 2026/05/25 22:12:29 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

//----------MAIN----------//

#include <stdio.h>

int	main()
{
	int a;
	int	b;
	int	div;
	int	mod;
	
	a = 10;
	b = 3;
	
	ft_div_mod(a, b, &div, &mod);

	printf("Bolum %d\n", div);
	printf("Kalan %d\n", mod);
	
	return (0);
}
