/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:19:32 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/02 08:34:50 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int i)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
}

void	ft_print_comb2(void)
{
	int duo1;
	int duo2;

	duo1 = 0 - 1;
	while (duo1++ < 98)
	{
		duo2 = duo1;
		while (duo2++ < 99)
		{
			display(duo1);
			ft_putchar(' ');
			display(duo2);
			if (duo1 != 98 || duo2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
