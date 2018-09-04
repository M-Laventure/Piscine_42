/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:55:27 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 13:03:06 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;
	int is_num;

	i = 0;
	is_num = 1;
	while (is_num == 1 && str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			is_num = 0;
		}
	i++;
	}
	return (is_num);
}
				
int main()
{
	char str[] = "123456";
	printf("%d", ft_str_is_numeric(str));
	return(0);
}
