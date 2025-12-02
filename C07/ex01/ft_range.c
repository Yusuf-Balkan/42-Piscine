/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 20:34:57 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 20:34:57 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int    *ft_range(int min, int max)
{
    int    *arr;
    int    y;

    if (min >= max)
        return (NULL);
    arr = (int *)malloc((max - min) * sizeof(int));
    if (arr == NULL)
        return (NULL);
    y = 0;
    while (min < max)
    {
        arr[y] = min;
        y++;
        min++;
    }
    return (arr);
}