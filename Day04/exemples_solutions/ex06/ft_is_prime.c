/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 08:44:39 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/03 09:14:57 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return (0);
	else if ((nb == 2) || (nb == 3) || (nb == 5) || (nb == 7))
		return (1);
	else if ((nb % 2 == 0) || (nb % 3 == 0) || (nb % 5 == 0) || (nb % 7 == 0))
		return (0);
	divisor = 9;
	while (nb % divisor != 0)
	{
		divisor += 2;
	}
	if (divisor == nb)
		return (1);
	return (0);
}
