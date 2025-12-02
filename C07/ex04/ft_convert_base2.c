/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 21:20:59 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 21:20:59 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h> 

#include <stdlib.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_check_base(base);
	if (base_len < 2)
		return (0);
	while (str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_in_base(str[i], base) != -1)
	{
		result = result * base_len + ft_in_base(str[i], base);
		i++;
	}
	return (result * sign);
}

int	ft_nbr_len(long nbr, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_check_base(base);
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(long nbr, char *base)
{
	int		base_len;
	int		len;
	char	*result;

	base_len = ft_check_base(base);
	len = ft_nbr_len(nbr, base);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
		result[0] = base[0];
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = base[nbr % base_len];
		nbr /= base_len;
	}
	return (result);
}
