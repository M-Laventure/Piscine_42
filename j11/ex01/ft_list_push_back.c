/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:55:38 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 17:42:38 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*navig;
	navig = *begin_list;
	while (navig)
		navig = navig->next;
	navig = ft_create_elem(data);
	navig->next = NULL;
}
