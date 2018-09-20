/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:33:21 by malavent          #+#    #+#             */
/*   Updated: 2018/09/03 12:21:16 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if ((power >= 13 && nb > 1) || power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
