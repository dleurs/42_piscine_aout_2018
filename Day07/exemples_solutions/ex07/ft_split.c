/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 13:40:03 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/08 13:40:04 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_in_tab(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen_spc(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] != '\0' && (!(char_in_tab(charset, str[i]))))
		i++;
	return (i);
}

int		nb_w(char *str, char *charset)
{
	int nb_w;
	int i;

	nb_w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strlen_spc(&str[i], charset) != 0)
		{
			nb_w += 1;
			i += ft_strlen_spc(&str[i], charset) - 1 + 1;
		}
		else
			i++;
	}
	return (nb_w);
}

void	add_word_to_tab(char **tab, int *tab_save, char *str, char *charset)
{
	int j;
	int i;
	int i_w;

	i = tab_save[0];
	i_w = tab_save[1];
	tab[i_w] = malloc(sizeof(char*) * (ft_strlen_spc(&str[i], charset) + 1));
	j = 0;
	while (j < ft_strlen_spc(&str[i - j], charset))
	{
		tab[i_w][j] = str[i];
		i++;
		j++;
	}
	tab[i_w][j] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab_of_tab;
	int		i_w;
	int		*tab_save;

	tab_of_tab = malloc(sizeof(char**) * (nb_w(str, charset) + 1));
	if (tab_of_tab == NULL)
		return (NULL);
	i_w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strlen_spc(&str[i], charset) != 0 && i_w < nb_w(str, charset))
		{
			tab_save = malloc(sizeof(int) * 2);
			tab_save[0] = i;
			tab_save[1] = i_w;
			add_word_to_tab(tab_of_tab, tab_save, str, charset);
			i += ft_strlen_spc(&str[i], charset) - 1;
			i_w++;
		}
		i++;
	}
	tab_of_tab[nb_w(str, charset)] = 0;
	return (tab_of_tab);
}
