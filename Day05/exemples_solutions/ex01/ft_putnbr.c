/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:51:31 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/05 18:49:50 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nbre;

	if (nb < 0)
	{
		ft_putchar('-');
		nbre = nb * -1;
	}
	else
	{
		nbre = nb;
	}
	if (nbre >= 10)
		ft_putnbr(nbre / 10);
	ft_putchar(nbre % 10 + '0');
}
