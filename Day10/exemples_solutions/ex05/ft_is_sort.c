/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:32:08 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/08 19:32:09 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_asc(int *tab, int lenght, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort_dsc(int *tab, int lenght, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	return (ft_is_sort_asc(tab, lenght, f) || ft_is_sort_dsc(tab, lenght, f));
}
