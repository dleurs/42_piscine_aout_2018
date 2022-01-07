/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 09:45:01 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/03 09:58:58 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return (2);
	divisor = 2;
	while (nb % divisor != 0)
		divisor++;
	if (divisor == nb)
		return (1);
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int closest_prime;

	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	closest_prime = nb + 1;
	while (ft_is_prime(closest_prime) != 1)
	{
		closest_prime++;
	}
	return (closest_prime);
}
