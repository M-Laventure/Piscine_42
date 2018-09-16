/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:14:39 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 11:14:40 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int		main(int argc, char **argv)
{
	int		val1;
	int		val2;
	char	op;

	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (!(ope_is_ok(argv[2])))
	{

		ft_putstr("error : only [ + - * / % ] are accepted.\n");
		return (0);
	}
	op = *argv[2];
	if (argc != 4)
		return (0);
	ft_doop(val1, op, val2);
	return (0);
}
