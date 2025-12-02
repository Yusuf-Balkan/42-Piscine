/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 21:20:52 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 21:20:52 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int    ft_check_base(char *base);
int    ft_atoi_base(char *str, char *base);
char   *ft_putnbr_base(int nbr, char *base);

int    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int    num;
    char   *result;

    if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
        return (NULL);
    num = ft_atoi_base(nbr, base_from);
    result = ft_putnbr_base(num, base_to);
    return (result);
}

