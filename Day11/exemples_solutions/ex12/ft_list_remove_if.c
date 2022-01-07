/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 16:32:42 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/13 16:32:44 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int i;

	if (begin_list == 0)
		return (0);
	i = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

void	ft_remove_if_first_elem(t_list **begin_list, \
								void *data_ref, int (*cmp)())
{
	t_list	*substract;

	if (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		if ((*begin_list)->next == 0)
		{
			substract = *begin_list;
			*begin_list = 0;
			free(substract);
		}
		else
		{
			substract = *begin_list;
			(*begin_list) = (*begin_list)->next;
			free(substract);
		}
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*substract;
	int		i;
	int		len;

	i = 0 - 1;
	if (*begin_list != 0)
		len = ft_list_size(*begin_list);
	while (*begin_list && ++i < len)
	{
		current = *begin_list;
		while (current && current->next)
		{
			if ((*cmp)(current->next->data, data_ref) == 0)
			{
				substract = current->next;
				current->next = current->next->next;
				free(substract);
			}
			current = current->next;
		}
	}
	ft_remove_if_first_elem(begin_list, data_ref, cmp);
}
