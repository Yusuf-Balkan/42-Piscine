/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:08:48 by ybalkan           #+#    #+#             */
/*   Updated: 2026/05/25 22:09:45 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

//----------MAIN----------//

#include <stdio.h>

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	ft_rev_int_tab(tab, 5);

	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}

	return (0);
}
