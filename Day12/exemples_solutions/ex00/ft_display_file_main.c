/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:55:54 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/16 17:55:55 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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

int		main(int ac, char **av)
{
	int		fd;
	char	buf;

	if (ac <= 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (-1);
		while (read(fd, &buf, 1) != 0)
			write(1, &buf, 1);
		if (close(fd) == -1)
			return (-1);
	}
	else
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
