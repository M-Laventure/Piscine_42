/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:25:17 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 12:31:18 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *navig;
	if (*begin_list == NULL)
		return (begin_list);
	navig = *begin_list;
	while (navig->next)
		navig = navig->next;
	return (navig);
}
