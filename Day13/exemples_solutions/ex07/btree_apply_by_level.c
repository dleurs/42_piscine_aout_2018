/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 22:25:18 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/22 22:25:21 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_list	*create_elem_linked(t_btree *current, int level)
{
	t_list	*linked_list;

	linked_list = malloc(sizeof(t_list));
	linked_list->level = level;
	linked_list->next = 0;
	linked_list->current_bt = current;
	linked_list->data = current->item;
	linked_list->new_level = 0;
	return (linked_list);
}

void	create_t_list_from_tree(t_btree *current, \
					t_list **linked_list, int level)
{
	t_list *current_tl;

	if (current)
	{
		if (*linked_list)
		{
			current_tl = *linked_list;
			while (current_tl->next)
				current_tl = current_tl->next;
			current_tl->next = create_elem_linked(current, level);
		}
		else
			*linked_list = create_elem_linked(current, level);
		create_t_list_from_tree(current->left, linked_list, level + 1);
		create_t_list_from_tree(current->right, linked_list, level + 1);
	}
}

void	ft_list_sort(t_list **begin_list)
{
	t_list	*save_n;
	t_list	*n2;
	t_list	*n3;
	t_list	*current;

	current = *begin_list;
	while (*begin_list && (*begin_list)->next && current)
	{
		save_n = *begin_list;
		n2 = save_n->next;
		while (n2->next)
		{
			n3 = n2->next;
			if (n2->level > n3->level)
			{
				n2->next = n3->next;
				n3->next = n2;
				save_n->next = n3;
			}
			save_n = save_n->next;
			n2 = save_n->next;
		}
		current = current->next;
	}
}

void	btree_apply_by_level(t_btree *root, \
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_list *lk_l;
	t_list *current;
	t_list *prev;

	lk_l = 0;
	create_t_list_from_tree(root, &lk_l, 0);
	ft_list_sort(&lk_l);
	prev = lk_l;
	if (prev)
	{
		prev->new_level = 1;
		current = prev->next;
		while (current)
		{
			if (prev->level != current->level)
				current->new_level = 1;
			prev = prev->next;
			current = current->next;
		}
	}
	while (lk_l)
	{
		(*applyf)(lk_l->current_bt->item, lk_l->level, lk_l->new_level);
		lk_l = lk_l->next;
	}
}
