/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:05:50 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/13 17:05:51 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	if (current == 0)
		*begin_list1 = begin_list2;
	while (current != 0)
	{
		current = current->next;
		if (current->next == 0)
		{
			current->next = begin_list2;
			break ;
		}
	}
}
