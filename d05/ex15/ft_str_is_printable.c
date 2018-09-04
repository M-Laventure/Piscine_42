/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:20:19 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 14:32:27 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;
	int is_printable;

	i = 0;
	is_printable = 1;
	while (is_printable == 1 && str[i] != '\0')
	{
		if (str[i] < 33 || str[i] > 127)
		{
			is_printable = 0;
		}
	i++;
	}
	return (is_printable);
}
				
int main()
{
	char str[] = "aBEJ&^%$#@!+_-*/024";
	printf("%d", ft_str_is_printable(str));
	return(0);
}
