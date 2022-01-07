/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:23:17 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/13 14:23:18 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
						void *data_ref, int (*cmp)(void *, void *))
{
	t_list *current_node;

	current_node = begin_list;
	while (current_node)
	{
		if ((*cmp)(current_node->data, data_ref) == 0)
			(*f)(current_node->data);
		current_node = current_node->next;
	}
}
