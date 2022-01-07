/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:35:25 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/14 13:35:26 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

void	ft_swap_links_first(t_list **save, t_list **a_node, t_list **b_node)
{
	(*a_node)->next = (*b_node)->next;
	(*b_node)->next = (*a_node);
	(*save) = (*b_node);
}

void	ft_swap_links(t_list **save, t_list **a_node, t_list **b_node)
{
	(*a_node)->next = (*b_node)->next;
	(*b_node)->next = (*a_node);
	(*save)->next = (*b_node);
}

void	ft_sort_bubble(t_list **begin_list, int (*cmp)())
{
	t_list	*save_n;
	t_list	*n2;
	t_list	*n3;

	n2 = *begin_list;
	n3 = n2->next;
	if ((*cmp)(n2->data, n3->data) > 0)
		ft_swap_links_first(begin_list, &n2, &n3);
	save_n = *begin_list;
	n2 = save_n->next;
	while (n2->next)
	{
		n3 = n2->next;
		if ((*cmp)(n2->data, n3->data) > 0)
			ft_swap_links(&save_n, &n2, &n3);
		save_n = save_n->next;
		n2 = save_n->next;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int i;

	i = 0 - 1;
	if (*begin_list != 0 && (*begin_list)->next != 0)
	{
		while (++i < ft_list_size(*begin_list))
			ft_sort_bubble(begin_list, cmp);
	}
}
