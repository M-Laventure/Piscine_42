/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:05:27 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 12:23:45 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	if (*begin_list == NULL)
		return (0);
	navig_list = *begin_list;
	while (*begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}		
