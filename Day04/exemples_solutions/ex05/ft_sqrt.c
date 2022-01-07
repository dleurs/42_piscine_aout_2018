/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 21:44:15 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/04 13:08:22 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long sqrt_test;

	if (nb <= 0)
		return (0);
	else
	{
		sqrt_test = 1;
		while ((sqrt_test * sqrt_test) <= nb)
		{
			if ((sqrt_test * sqrt_test) == nb)
				return (sqrt_test);
			sqrt_test++;
		}
		return (0);
	}
}
