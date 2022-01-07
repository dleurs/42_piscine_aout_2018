/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:21:37 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/12 19:21:38 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	i;

	current = begin_list;
	if (current == 0)
		return (0);
	if (nbr == 0)
		return (current);
	i = 0;
	while (current->next)
	{
		current = current->next;
		i++;
		if (i == nbr)
			return (current);
	}
	return (0);
}
