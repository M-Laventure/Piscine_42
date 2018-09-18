/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:50:46 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 20:26:14 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
	if (begin_list == NULL)
		return;
	t_list *navig;
	navig = begin_list;
	while (navig)
	{
		if ((*cmp)(navig->data, data_ref) == 0)
			(*f)(navig->data);
		navig = navig->next;
	}
}
