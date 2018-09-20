/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:22:23 by malavent          #+#    #+#             */
/*   Updated: 2018/09/13 16:46:12 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_spaces(char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\f' || str[i] == '\r' || str[i] == '\t' ||
	str[i] == '\v' || str[i] == '\n')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int	i;
	int	signe;
	int res_convert;

	i = 0;
	signe = 1;
	res_convert = 0;
	while (check_spaces(str, i) == 1)
	{
		i = i + 1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res_convert = res_convert * 10 + (str[i] - 48);
		i = i + 1;
	}
	res_convert = res_convert * signe;
	return (res_convert);
}
