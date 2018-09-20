/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:23:31 by malavent          #+#    #+#             */
/*   Updated: 2018/09/05 16:02:27 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int alpha_char;
	int i;

	ft_strlowcase(str);
	i = 0;
	alpha_char = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <=
		'9'))
		{
			if (alpha_char == 0 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			alpha_char = 1;
		}
		else
			alpha_char = 0;
		i++;
	}
	return (str);
}
