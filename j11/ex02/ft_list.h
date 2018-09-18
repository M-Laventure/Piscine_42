/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:34:39 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 18:47:08 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

t_list	*ft_create_elem(void *data)
{
	t_list *new_list;
	if(!(new_list = malloc(sizeof(t_list))))
		return(0);
	new_list->data = data;
	new_list->next = NULL;
	return (new_list);
}

typedef	struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif
