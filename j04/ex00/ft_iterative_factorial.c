/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:30:23 by malavent          #+#    #+#             */
/*   Updated: 2018/09/02 21:21:34 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb <= 0 || nb >= 13)
	{
		res = 0;
	}
	if (nb == 0)
	{
		res = 1;
	}
	else
	{
		while (nb >= 1)
		{
			res = res * nb;
			nb = nb - 1;
		}
	}
	return (res);
}
