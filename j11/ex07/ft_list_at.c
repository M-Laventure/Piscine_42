/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:46:54 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 19:06:01 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list	*begin_list, unsigned int nbr);
{
	int i;
	
	if (begin_list == NULL)
		return (0);
	i = 0;
	t_list *navig;
	navig = begin_list;
	while (i < nbr)
	{
		if (navig == NULL)
			return (navig);
		navig = navig->next;
		i++;
	}
}
