/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 17:20:47 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 12:26:44 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h> 
#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int res;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char s1[] = "Hello";
	char s2[] = "Hel";
	printf("%d", strncmp(s1, s2, 6));
	printf("%d", ft_strncmp(s1, s2, 6));
}
