/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:11:33 by ybalkan           #+#    #+#             */
/*   Updated: 2026/05/25 17:15:49 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char i;
    i = 97;
    while (i <= 122)
    {
        write(1, &i, 1);
        i++;
    }  
}

//----------MAIN----------//

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
