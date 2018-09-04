/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:18:22 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 18:51:29 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_signe(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		return (nb * -1);
	}
	else
	{
		return (nb);
	}
}

void	ft_putnbr(int nb)
{
	int nbr;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(48 + 2);
		nbr = 147483648;
	}
	else
	{
		nbr = ft_signe(nb);
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(48 + nbr % 10);
}
