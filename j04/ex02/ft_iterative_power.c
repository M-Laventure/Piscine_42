/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:10:23 by malavent          #+#    #+#             */
/*   Updated: 2018/09/03 12:21:28 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = 1;
	i = 0;
	if (power == 0)
		res = 1;
	if ((power >= 13 && nb > 1) || power < 0)
		res = 0;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
