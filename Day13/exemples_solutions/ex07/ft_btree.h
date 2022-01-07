/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:44:44 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/17 13:44:46 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct			s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}						t_btree;

typedef struct s_list	t_list;

struct					s_list
{
	t_list			*next;
	int				level;
	t_btree			*current_bt;
	void			*data;
	int				new_level;
};

#endif
