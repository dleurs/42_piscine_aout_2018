/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:31:51 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/21 16:46:33 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*current;

	current = root;
	if (current)
	{
		(*applyf)(current->item);
		btree_apply_prefix(current->left, applyf);
		btree_apply_prefix(current->right, applyf);
	}
}
