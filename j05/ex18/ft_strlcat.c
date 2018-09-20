/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:02:03 by malavent          #+#    #+#             */
/*   Updated: 2018/09/06 09:51:11 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = len_dest;
	if (size <= len_dest)
		return (size + len_src);
	while (src[j] != '\0' && j < size - 1 - i)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
