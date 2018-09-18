/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:59:44 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 12:04:59 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *navig;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	navig = ft_create_elem(data);
	navig->next = *begin_list;
}
