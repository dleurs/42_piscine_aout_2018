/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:29:57 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/21 16:47:03 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*current;

	current = root;
	if (current)
	{
		btree_apply_infix(current->left, applyf);
		(*applyf)(current->item);
		btree_apply_infix(current->right, applyf);
	}
}
