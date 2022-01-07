/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 21:59:58 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/21 22:00:00 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, \
							int (*cmpf)(void *, void *))
{
	t_btree *current;

	current = root;
	if (current)
	{
		if ((*cmpf)(data_ref, current->item) > 0 && current->right)
			return (btree_search_item(current->right, data_ref, cmpf));
		else if ((*cmpf)(data_ref, current->item) < 0 && current->left)
			return (btree_search_item(current->left, data_ref, cmpf));
		else if ((*cmpf)(data_ref, current->item) == 0)
			return (current->item);
	}
	return (0);
}
