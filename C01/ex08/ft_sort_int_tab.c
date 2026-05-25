/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:10:34 by ybalkan           #+#    #+#             */
/*   Updated: 2026/05/25 22:11:17 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

//----------MAIN----------//

#include <stdio.h>

int	main(void)
{
	int	tab[5] = {5, 2, 4, 1, 3};
	int	i;

	ft_sort_int_tab(tab, 5);

	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}

	return (0);
}
