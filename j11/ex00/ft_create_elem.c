/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:49:50 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 20:42:00 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new_list;
	if(!(new_list = malloc(sizeof(t_list))))
		return(0);
	new_list->data = data;
	new_list->next = NULL;
	return (new_list);
}
