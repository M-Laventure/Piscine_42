/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:26:31 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 20:32:04 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *find;

	if (begin_list == NULL)
		return (begin_list);
	find = begin_list;
	while (find)
	{
		if ((*cmp)(find->data, data_ref)
			return (find);
		find->find->next;
	}
	return (find);
}
