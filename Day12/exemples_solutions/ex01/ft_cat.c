/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:20:15 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/17 13:20:17 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_core(char **av, int *fd, int *i)
{
	char	buffer;

	*fd = open(av[*i], O_RDWR);
	if (*fd < 0)
	{
		ft_putstr("cat: ");
		ft_putstr(av[*i]);
		if (errno == 21)
			ft_putstr(": Is a directory\n");
		else if (errno == EACCES)
			ft_putstr(": Permission denied\n");
		else
			ft_putstr(": No such file or directory\n");
	}
	else
	{
		while (read(*fd, &buffer, 1))
			write(1, &buffer, 1);
	}
	close(*fd);
	(*i)++;
}

int		main(int ac, char **av)
{
	int		fd;
	char	buf;
	int		i;

	if (ac == 1)
	{
		while (read(STDIN_FILENO, &buf, 1) > 0)
			write(1, &buf, 1);
		return (0);
	}
	i = 1;
	while (i < ac)
		ft_core(av, &fd, &i);
	return (0);
}
