/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 09:30:28 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/02 09:32:55 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_div;
	int temp_rest;

	temp_div = *a / *b;
	temp_rest = *a % *b;
	*a = temp_div;
	*b = temp_rest;
}
