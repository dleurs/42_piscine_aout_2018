/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 20:41:47 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/08 20:41:49 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_should_skip(char c)
{
	if (c == '+' || c == '\v' || c == ' ' || c == '\n')
		return (1);
	if (c == '\t' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int	i;

	sign = 1;
	nb = 0;
	i = 0;
	while (ft_should_skip(str[i]))
		i++;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

int		is_a_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		else if (str[i] == '+' || str[i] == '-')
			;
		else
			return (0);
		i++;
	}
	return (0);
}
