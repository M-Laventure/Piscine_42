/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:52:08 by malavent          #+#    #+#             */
/*   Updated: 2018/09/05 19:22:54 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		base_is_ok(char *base)
{
	int i;
	int j;
	int base_is_ok;

	base_is_ok = 1;
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		base_is_ok = 0;
	while (base[i] != '\0' && base_is_ok != 0)
	{
		j = i + 1;
		while (base[j] != '\0' && base_is_ok != 0)
		{
			if (base[i] == base[j])
				base_is_ok = 0;
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			base_is_ok = 0;
		i++;
	}
	return (base_is_ok);
}

int		ft_signe(int nb)
{
	if (nb < 0)
		return (nb * -1);
	else
		return (nb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size_base;
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = ft_signe(nbr);
	}
	n = (unsigned int)nbr;
	if (base_is_ok(base))
	{
		size_base = 0;
		while (base[size_base] != '\0')
			size_base++;
		if (n > size_base)
		{
			ft_putnbr_base(n / size_base, base);
			ft_putnbr_base(n % size_base, base);
		}
		else
			ft_putchar(base[n]);
	}
}
