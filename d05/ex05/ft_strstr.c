/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:13:19 by malavent          #+#    #+#             */
/*   Updated: 2018/09/03 20:31:09 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *strstr(const char *haystack, const char *needle);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int is_find;

	i = 0;
	is_find = 0;
	while (str[i] != '\0' && is_find != 1)
	{
		is_find = 1;
		j = 0;
		while (to_find[j] != '\0' && to_find != 0)
		{
			if (to_find[j] != str[i + j])
				is_find = 0;
			j++;
		}
		i++;
	}
	if (is_find == 1)
		return (&str[i-1]);
	else
		return (0);
}

int		main(void)
{
	char *to_find;
	char *str;

	to_find = "if";
	str = "issdssgif";
	printf("%s", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
		
	return (0);
}
