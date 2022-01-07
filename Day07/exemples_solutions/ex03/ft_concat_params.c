/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:36:29 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/07 16:02:19 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		ft_total_len(int argc, char **argv)
{
	int i;
	int total_len;

	i = 0;
	total_len = 0;
	while (i < argc)
	{
		total_len += ft_strlen(argv[i]) + 1;
		i++;
	}
	return (total_len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i_argv;
	int		i_total_argv;
	char	*total_argv;
	int		i_word;

	total_argv = malloc(sizeof(char) * ft_total_len(argc, argv));
	i_argv = 1;
	i_total_argv = 0;
	while (i_argv < argc)
	{
		i_word = 0;
		while (argv[i_argv][i_word] != '\0')
		{
			total_argv[i_total_argv] = argv[i_argv][i_word];
			i_word++;
			i_total_argv++;
		}
		if (i_argv < argc - 1)
			total_argv[i_total_argv] = '\n';
		i_total_argv++;
		i_argv++;
	}
	total_argv[i_total_argv - 1] = '\0';
	return (total_argv);
}
