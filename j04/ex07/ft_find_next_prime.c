/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:35:45 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 11:56:08 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_test(int nb)
{
	int i;
	int res;

	i = 2;
	res = 1;
	if (nb < 2)
		res = 0;
	while (i <= 46340 && i < nb)
	{
		if (nb % i == 0 && nb != 2)
			res = 0;
		i++;
	}
	return (res);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime_test(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
