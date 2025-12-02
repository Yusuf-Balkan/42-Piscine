/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 21:27:14 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 21:27:14 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char    **ft_split(char *str, char *charset)
{
    char    **result;
    int     i;
    int     j;
    int     k;
    int     word_count;

    word_count = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] && strchr(charset, str[i]))
            i++;
        if (str[i])
            word_count++;
        while (str[i] && !strchr(charset, str[i]))
            i++;
    }
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    k = 0;
    while (k < word_count)
    {
        while (str[i] && strchr(charset, str[i]))
            i++;
        j = i;
        while (str[j] && !strchr(charset, str[j]))
            j++;
        result[k] = (char *)malloc((j - i + 1) * sizeof(char));
        if (!result[k])
            return (NULL);
        strncpy(result[k], &str[i], j - i);
        result[k][j - i] = '\0';
        k++;
        i = j;
    }
    result[word_count] = NULL;
    return (result);
}