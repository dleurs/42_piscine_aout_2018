/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:32:17 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/21 16:47:23 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*current;

	current = root;
	if (current)
	{
		btree_apply_suffix(current->left, applyf);
		btree_apply_suffix(current->right, applyf);
		(*applyf)(current->item);
	}
}
