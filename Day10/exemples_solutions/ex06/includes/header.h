/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleurs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 20:45:37 by dleurs            #+#    #+#             */
/*   Updated: 2018/08/08 20:45:39 by dleurs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
int					cmp(char *s1, char *s2);

int					ft_atoi(char *str);
int					is_a_number(char *str);

int					ft_add(int a, int b);
int					ft_div(int a, int b);
int					ft_mod(int a, int b);
int					ft_mul(int a, int b);
int					ft_sub(int a, int b);

typedef struct		s_opp
{
	char	*str_op;
	int		(*ptr_function)(int, int);
}					t_opp;

t_opp g_opptab[] =
{
	{"+", &ft_add},
	{"-", &ft_sub},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
};

#endif
