/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 21:03:33 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/04 21:04:15 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (i > 0 && (!(is_alpha(str[i - 1]))))
				str[i] -= 'a' - 'A';
			else if (i == 0)
				str[i] -= 'a' - 'A';
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (i > 0 && is_alpha(str[i - 1]))
				str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
