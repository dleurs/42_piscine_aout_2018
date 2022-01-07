/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 09:53:40 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/05 09:54:16 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int i_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	i_src = 0;
	while (src[i_src] != '\0' && i_src < nb)
	{
		dest[i + i_src] = src[i_src];
		i_src++;
	}
	dest[i + i_src] = '\0';
	return (dest);
}
