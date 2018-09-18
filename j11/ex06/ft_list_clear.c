/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:47:04 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 18:46:36 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *stock;

	if (*begin_list == NULL)
		return;
	element = *begin_list;
	while (*begin_list)
	{
		stock = element;
		element = element->next;
		free(stock);
	}
	*begin_list = NULL;
}
