/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:40:16 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 11:13:58 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_H
# define OP_H
# include <unistd.h>

int		ft_mul(int x, int y);
int		ope_is_ok(char *ope);
int		ft_add(int x, int y);
int		ft_sub(int x, int y);
int		ft_div(int x, int y);
int		ft_mod(int x, int y);
int		ft_usage(int x, int y);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_doop(int val1, char op, int val2);

#endif
