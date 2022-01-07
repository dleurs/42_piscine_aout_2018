/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:54:21 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/12 18:54:22 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *next_elem;

	current = *begin_list;
	if (current)
	{
		while (current->next)
		{
			next_elem = current->next;
			free(current);
			current = next_elem;
		}
	}
	*begin_list = 0;
}
