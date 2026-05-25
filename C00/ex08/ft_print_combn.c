/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 20:23:34 by ybalkan           #+#    #+#             */
/*   Updated: 2026/05/25 21:22:46 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rec(char *arr, int n, int index, char start)
{
    char c;
    int i;
    
    if (index == n)
    {
        i = 0;
        while (i < n)
            write(1, &arr[i++], 1);
        if (arr[0] != (10 - n) + '0')
            write(1, ", ", 2);
        return ;
    }
    c = start;
    while (c <= '9')
    {
        arr[index] = c;
        rec(arr, n, index + 1, c + 1);
        c++;
    }
}

void    ft_print_combn(int n)
{
    char    arr[10];

    if (n > 0 && n < 10)
        rec(arr, n, 0, '0');
}

//----------MAIN----------//

int main()
{
    ft_print_combn(2);
    return (0);
}
