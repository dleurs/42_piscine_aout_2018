/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:35:49 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/14 18:35:51 by dleurs           ###   ########.fr       */
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

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	int		len;
	void	*temp;
	t_list	*current;

	i = 0;
	if (begin_list)
		len = ft_list_size(begin_list);
	current = begin_list;
	while (begin_list && i < len - 1)
	{
		j = i;
		current = begin_list;
		while (current && current->next && j < len - 1)
		{
			temp = current->next->data;
			current->next->data = current->data;
			current->data = temp;
			current = current->next;
			j++;
		}
		i++;
	}
}
