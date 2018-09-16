/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:27:24 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 11:14:30 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int		ft_mul(int x, int y)
{
	int res;

	res = x * y;
	return (res);
}

int		ft_add(int x, int y)
{
	int res;

	res = x + y;
	return (res);
}

int		ft_sub(int x, int y)
{
	int res;

	res = x - y;
	return (res);
}

int		ft_div(int x, int y)
{
	int res;

	res = x / y;
	return (res);
}

int		ft_mod(int x, int y)
{
	int res;

	res = x % y;
	return (res);
}
