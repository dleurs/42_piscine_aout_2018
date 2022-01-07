/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 08:41:21 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/05 08:53:56 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_alpha_upper(str[i])))
			return (0);
		i++;
	}
	return (1);
}
