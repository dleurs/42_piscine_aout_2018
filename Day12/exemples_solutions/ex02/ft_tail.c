/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:42:25 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/20 15:42:27 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "header.h"

void	tail_read(int nb_bytes, int fd, int num_file, char **av)
{
	int		len;
	char	buf;
	int		i;

	len = 0;
	i = 0;
	while (read(fd, &buf, 1) != 0)
		len++;
	close(fd);
	fd = open(av[num_file], O_RDWR);
	while ((i < len - nb_bytes) && read(fd, &buf, 1))
		i++;
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

void	ft_core_1(int nb_bytes, char **av, int num_file)
{
	int fd;

	fd = open(av[num_file], O_RDWR);
	if (fd < 0 && errno != 21)
	{
		ft_putstr("tail: ");
		ft_putstr(av[num_file]);
		if (errno == EACCES)
			ft_putstr(": Permission denied\n");
		else
			ft_putstr(": No such file or directory\n");
	}
	else
	{
		if (errno != 21)
			tail_read(nb_bytes, fd, num_file, av);
	}
	close(fd);
}

void	ft_core(int nb_bytes, char **av, int num_file)
{
	int fd;

	fd = open(av[num_file], O_RDWR);
	if (fd < 0 && errno != 21)
	{
		ft_putstr("tail: ");
		ft_putstr(av[num_file]);
		if (errno == EACCES)
			ft_putstr(": Permission denied\n");
		else
			ft_putstr(": No such file or directory\n");
	}
	else
	{
		if (num_file != 3)
			ft_putstr("\n==> ");
		else
			ft_putstr("==> ");
		ft_putstr(av[num_file]);
		ft_putstr(" <==\n");
		if (errno != 21)
			tail_read(nb_bytes, fd, num_file, av);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	int nb_bytes;
	int num_file;

	if (ac <= 3)
	{
		ft_putstr("Option -c or/and file are missing.\n");
		return (1);
	}
	nb_bytes = ft_atoi(av[2]);
	num_file = 3;
	if (ac == 4)
	{
		ft_core_1(nb_bytes, av, num_file);
		return (0);
	}
	while (num_file < ac)
	{
		ft_core(nb_bytes, av, num_file);
		num_file++;
	}
	return (0);
}
