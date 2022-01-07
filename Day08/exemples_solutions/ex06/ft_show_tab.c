/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:28:08 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/07 18:28:11 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int nbre;

	if (nb < 0)
	{
		ft_putchar('-');
		nbre = nb * -1;
	}
	else
	{
		nbre = nb;
	}
	if (nbre >= 10)
		ft_putnbr(nbre / 10);
	ft_putchar(nbre % 10 + '0');
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i_argv;
	int		i_total_argv;
	char	*total_argv;
	int		i_word;

	total_argv = malloc(sizeof(char) * (argc + 1));
	i_argv = 1;
	i_total_argv = 0;
	while (i_argv < argc)
	{
		i_word = 0;
		while (argv[i_argv][i_word] != '\0')
		{
			total_argv[i_total_argv] = argv[i_argv][i_word];
			i_word++;
			i_total_argv++;
		}
		if (i_argv < argc - 1)
			total_argv[i_total_argv] = '\n';
		i_total_argv++;
		i_argv++;
	}
	total_argv[i_total_argv - 1] = '\0';
	return (total_argv);
}

int		c_w(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_show_tab(t_stock_par *par)
{
	int i;

	while (par[i].str != NULL)
	{
		ft_putnbr(i);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_putstr(ft_concat_params(c_w(par[i].size_param), par[i].size_param));
		ft_putchar('\n');
		i++;
	}
}
