/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:45:31 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/06 20:45:32 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		find_index(char *base, char c)
{
	int index;

	index = 0;
	while (c != base[index])
	{
		index++;
		if (base[index] == '\0')
			return (-1);
	}
	return (index);
}

int		ft_atoi_base(char *str, char *base)
{
	int nb;
	int i;
	int len;
	int sign;

	nb = 0;
	i = 0;
	len = ft_strlen(base);
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (i < ft_strlen(str))
	{
		if (find_index(base, str[i]) == -1)
			return (0);
		nb = nb * len + find_index(base, str[i]);
		i++;
	}
	return (nb * sign);
}

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = 1;
		while (power >= 1)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_dec;
	int		i;
	int		len_base;
	char	*res;

	nb_dec = ft_atoi_base(nbr, base_from);
	len_base = ft_strlen(base_to);
	i = 1;
	while (nb_dec > ft_iterative_power(len_base, i))
		i++;
	res = (char*)malloc(sizeof(char) * (i + 1));
	res[i] = '\0';
	i--;
	while (i >= 0)
	{
		res[i] = base_to[nb_dec % len_base];
		nb_dec = nb_dec / len_base;
		i--;
	}
	return (res);
}
