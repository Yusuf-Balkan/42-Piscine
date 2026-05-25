/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:29:11 by ybalkan           #+#    #+#             */
/*   Updated: 2026/05/25 17:35:45 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char i;
    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}

//----------MAIN----------//

int main()
{
    ft_print_numbers();
    return (0);
}
