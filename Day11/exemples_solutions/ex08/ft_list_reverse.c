/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:31:20 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/12 19:31:22 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*next_node;
	t_list		*last_node;
	t_list		*current_node;

	current_node = *begin_list;
	last_node = 0;
	while (current_node)
	{
		next_node = current_node->next;
		current_node->next = last_node;
		last_node = current_node;
		current_node = next_node;
	}
	*begin_list = last_node;
}
