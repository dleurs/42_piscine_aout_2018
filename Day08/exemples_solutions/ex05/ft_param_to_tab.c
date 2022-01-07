/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:55:03 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/07 16:55:06 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	int		len;
	char	*str_res;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	str_res = (char*)malloc(sizeof(char) * (len + 1));
	if (str_res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_res[i] = src[i];
		i++;
	}
	str_res[i] = '\0';
	return (str_res);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *params;
	int			i;

	params = malloc(sizeof(*params) * (ac + 1));
	if (params == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		params[i].size_param = ft_strlen(av[i]);
		params[i].str = av[i];
		params[i].copy = ft_strdup(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	params[i].str = NULL;
	return (params);
}
