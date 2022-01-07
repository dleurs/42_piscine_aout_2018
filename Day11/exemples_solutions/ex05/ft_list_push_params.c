/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:39:43 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/09 17:39:44 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*current;
	int		i;

	list = 0;
	current = 0;
	i = 0;
	while (i < ac)
	{
		current = ft_create_elem(av[i]);
		current->next = list;
		list = current;
		i++;
	}
	return (list);
}
