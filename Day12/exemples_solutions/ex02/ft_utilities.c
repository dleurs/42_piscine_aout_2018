/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:02:14 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/22 14:02:15 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int	i;

	sign = 1;
	nb = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '\v' || str[i] == ' ' || \
		str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || \
		str[i] == '\r' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}
