/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 21:09:47 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 21:09:47 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int   *ft_strjoin(int size, char **strs, char *sep)
{
    int     i;
    int     j;
    int     k;
    int     total_length;
    char    *result;

    if (size == 0)
    {
        result = (char *)malloc(1);
        if (result)
            result[0] = '\0';
        return (result);
    }
    total_length = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; strs[i][j] != '\0'; j++)
            total_length++;
    }
    for (j = 0; sep[j] != '\0'; j++);
    total_length += j * (size - 1);
    result = (char *)malloc(total_length + 1);
    if (!result)
        return (NULL);
    k = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; strs[i][j] != '\0'; j++)
            result[k++] = strs[i][j];
        if (i < size - 1)
        {
            for (j = 0; sep[j] != '\0'; j++)
                result[k++] = sep[j];
        }
    }
    result[k] = '\0';
    return (result);
}