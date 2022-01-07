/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:34:44 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/20 18:34:45 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, \
							int (*cmpf)(void *, void *))
{
	t_btree *current;

	current = *root;
	if (current == 0 && item)
		*root = btree_create_node(item);
	else if (current && item)
	{
		if ((*cmpf)(item, current->item) >= 0)
		{
			if (current->right)
				btree_insert_data(&(current->right), item, cmpf);
			else
				current->right = btree_create_node(item);
		}
		else if ((*cmpf)(item, current->item) < 0)
		{
			if (current->left)
				btree_insert_data(&(current->left), item, cmpf);
			else
				current->left = btree_create_node(item);
		}
	}
}
