/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:02:03 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 19:54:50 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/*iunsigned int strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "Hello";
	char src[] = "World";
	printf("%s", ft_strncat(dest, src, 3));
	return(0);
}*/

int main()
{
	char dest[] = "Hel";
	char src[] = " World";
	unsigned int size = 5;
	printf("%lu", strlcat(dest, src, size));
}
