/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:19:35 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 11:14:28 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "ft_opp.h"
#include "op.h"

int		ope_is_ok(char *ope)
{
	if (ope[1] == '\0' && (*ope == '%' || *ope == '+' || *ope == '-' ||
	*ope == '*' || *ope == '/'))
		return (1);
	return (0);
}

int		ft_doop(int val1, char op, int val2)
{
	int i;

	i = -1;
	if ((op == '%' || op == '/') && (val2 == 0))
	{
		if (op == '/')
			ft_putstr("Stop : division by zero\n");
		else
			ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	while (++i < 5)
	{
		if (op == g_opptab[i].op)
		{
			ft_putnbr(g_opptab[i].calc_op(val1, val2));
			ft_putchar('\n');
		}
	}
	return (0);
}
