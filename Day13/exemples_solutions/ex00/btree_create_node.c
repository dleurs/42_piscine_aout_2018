/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:17:36 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/21 16:45:33 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = (t_btree*)malloc(sizeof(t_btree));
	if (new_node == 0)
		return (0);
	new_node->item = item;
	new_node->left = 0;
	new_node->right = 0;
	return (new_node);
}
