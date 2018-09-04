/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:01:51 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 12:03:58 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int strcmp(const char *s1, const char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char s1[] = "";
	char s2[]= "";
	printf("%d", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
