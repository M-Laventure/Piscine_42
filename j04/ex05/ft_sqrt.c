/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:55:03 by malavent          #+#    #+#             */
/*   Updated: 2018/09/03 12:28:19 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int res;

	i = 1;
	res = 0;
	while (i * i <= nb && i < 46340)
	{
		if (i * i == nb)
			res = i;
		i++;
	}
	return (res);
}