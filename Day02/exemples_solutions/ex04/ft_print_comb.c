/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:37:35 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/01 11:54:31 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char fs_nb;
	char sd_nb;
	char th_nb;

	fs_nb = '0' - 1;
	while (fs_nb++ < '7')
	{
		sd_nb = fs_nb;
		while (sd_nb++ < '8')
		{
			th_nb = sd_nb;
			while (th_nb++ < '9')
			{
				ft_putchar(fs_nb);
				ft_putchar(sd_nb);
				ft_putchar(th_nb);
				if ((fs_nb != '7') || (sd_nb != '8') || (th_nb != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
