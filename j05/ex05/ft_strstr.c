/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:13:19 by malavent          #+#    #+#             */
/*   Updated: 2018/09/05 19:49:07 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		return (&str[i - 1]);
	else
		return (0);
}
