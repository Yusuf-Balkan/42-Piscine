/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:23:15 by ybalkan           #+#    #+#             */
/*   Updated: 2026/05/25 17:26:30 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    c;
    c = 122;
    while (c >= 97)
    {
        write(1, &c, 1);
        c--;
    }   
}
//----------MAIN----------//

int main()
{
    ft_print_reverse_alphabet();
    return (0);
}
