/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:59:27 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/06 12:02:17 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*str_res;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	str_res = (char*)malloc(sizeof(char) * (len + 1));
	if (str_res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_res[i] = src[i];
		i++;
	}
	str_res[i] = '\0';
	return (str_res);
}
