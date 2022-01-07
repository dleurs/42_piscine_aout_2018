/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:58:52 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/14 19:58:58 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		is_error_1(int ac, char **av)
{
	if (ac != 4)
	{
		return (1);
	}
	if (is_a_number(av[1]) && !is_a_number(av[3]))
	{
		ft_putnbr(ft_atoi(av[1]));
		ft_putchar('\n');
		return (1);
	}
	if (!is_a_number(av[1]) && is_a_number(av[3]))
	{
		ft_putnbr(ft_atoi(av[3]));
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		is_error_2(char **av)
{
	if (!is_a_number(av[1]) && !is_a_number(av[3]))
	{
		ft_putstr("0\n");
		return (1);
	}
	if (cmp(av[2], "%") == 0 && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	if (cmp(av[2], "/") == 0 && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	return (0);
}

int		ft_calcul(int a, int b, int (*f)(int, int))
{
	return ((*f)(a, b));
}

int		ft_finder_calcul(char **av)
{
	int i;

	i = 0 - 1;
	while (++i < 5)
	{
		if (cmp(av[2], g_opptab[i].str_op) == 0)
			return (ft_calcul(ft_atoi(av[1]), ft_atoi(av[3]), \
								g_opptab[i].ptr_function));
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (is_error_1(ac, av) || is_error_2(av))
		return (1);
	ft_putnbr(ft_finder_calcul(av));
	ft_putchar('\n');
	return (0);
}
