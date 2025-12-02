/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 15:01:00 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 15:01:00 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dup;
    int     len;
    int     y;

    len = 0;
    while (src[len] != '\0')
        len++;
    dup = (char *)malloc(len + 1);
    if (dup == NULL)
        return (NULL);
    y = 0;
    while (y < len)
    {
        dup[y] = src[y];
        y++;
    }
    dup[y] = '\0';
        return (dup);
}
