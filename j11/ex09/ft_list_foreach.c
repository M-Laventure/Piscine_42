/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:09:59 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 19:50:18 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list == NULL)
		return;
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list->next;
	}
}
