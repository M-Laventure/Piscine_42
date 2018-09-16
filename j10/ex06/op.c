/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 18:27:24 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 09:51:08 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int		multiply(int x, int y)
{
	int res;

	res = x * y;
	return (res);
}

int		add(int x, int y)
{
	int res;

	res = x + y;
	return (res);
}

int		substract(int x, int y)
{
	int res;

	res = x - y;
	return (res);
}

int		divide(int x, int y)
{
	int res;

	res = x / y;
	return (res);
}

int		modulo(int x, int y)
{
	int res;

	res = x % y;
	return (res);
}
