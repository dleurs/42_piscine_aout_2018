/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:32:34 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/06 19:28:17 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_spc(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	return (i);
}

int		nb_of_words(char *str)
{
	int nb_of_words;
	int i;

	nb_of_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strlen_spc(&str[i]) != 0)
		{
			nb_of_words += 1;
			i += ft_strlen_spc(&str[i]) - 1 + 1;
		}
		else
			i++;
	}
	return (nb_of_words);
}

void	add_word_to_tab(char **tab, int i, int index_word, char *str)
{
	int j;

	tab[index_word] = malloc(sizeof(char*) * (ft_strlen_spc(&str[i]) + 1));
	j = 0;
	while (j < ft_strlen_spc(&str[i - j]))
	{
		tab[index_word][j] = str[i];
		i++;
		j++;
	}
	tab[index_word][j] = '\0';
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab_of_tab;
	int		index_word;

	tab_of_tab = malloc(sizeof(char**) * (nb_of_words(str) + 1));
	if (tab_of_tab == NULL)
		return (NULL);
	index_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strlen_spc(&str[i]) != 0 && index_word < nb_of_words(str))
		{
			add_word_to_tab(tab_of_tab, i, index_word, str);
			i += ft_strlen_spc(&str[i]) - 1;
			index_word++;
		}
		i++;
	}
	tab_of_tab[nb_of_words(str)] = 0;
	return (tab_of_tab);
}
