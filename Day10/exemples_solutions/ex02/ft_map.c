/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:37:47 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/08 16:37:49 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	*res_tab;
	int	i;

	res_tab = (int*)malloc(sizeof(int) * lenght);
	if (res_tab == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		res_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (res_tab);
}
