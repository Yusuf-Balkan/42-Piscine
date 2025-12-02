/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 21:08:30 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 21:08:30 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int    ft_ultimate_range(int **range, int min, int max)
{
    int    *arr;
    int    y;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    arr = (int *)malloc((max - min) * sizeof(int));
    if (arr == NULL)
    {
        *range = NULL;
        return (-1);
    }
    y = 0;
    while (min < max)
    {
        arr[y] = min;
        y++;
        min++;
    }
    *range = arr;
    return (y);
}