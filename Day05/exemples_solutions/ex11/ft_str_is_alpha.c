/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 21:22:05 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/05 16:08:43 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_2(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_alpha_2(str[i])))
			return (0);
		i++;
	}
	return (1);
}
