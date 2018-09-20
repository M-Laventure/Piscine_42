/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 09:37:36 by malavent          #+#    #+#             */
/*   Updated: 2018/08/31 16:24:14 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	stock;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	len = len - 1;
	while (i <= len / 2)
	{
		stock = str[i];
		str[i] = str[len - i];
		str[len - i] = stock;
		i = i + 1;
	}
	return (str);
}
