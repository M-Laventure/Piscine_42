/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:45:58 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 12:25:36 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int is_sort;

	i = 0;
	is_sort = 1;
	if (f(tab[i], tab[i + 1]) > 0)
	{
		while (i + 1 < length && is_sort == 1)
		{
			if (f(tab[i], tab[i + 1] < 0))
				is_sort = 0;
			i++;
		}
	}
	else
		while (i + 1 < length && is_sort == 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				is_sort = 0;
			i++;
		}
	return (is_sort);
}
