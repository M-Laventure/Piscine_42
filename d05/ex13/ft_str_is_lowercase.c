/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:04:15 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 14:15:22 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;
	int is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (is_lowercase == 1 && str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			is_lowercase = 0;
		}
	i++;
	}
	return (is_lowercase);
}
				
int main()
{
	char str[] = "hellobonjour";
	printf("%d", ft_str_is_lowercase(str));
	return(0);
}
