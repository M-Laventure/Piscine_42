/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:14:59 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 14:19:26 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	int is_uppercase;

	i = 0;
	is_uppercase = 1;
	while (is_uppercase == 1 && str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			is_uppercase = 0;
		}
	i++;
	}
	return (is_uppercase);
}
				
int main()
{
	char str[] = "HELLOWORLD";
	printf("%d", ft_str_is_uppercase(str));
	return(0);
}
