/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 13:12:13 by malavent          #+#    #+#             */
/*   Updated: 2018/09/18 15:46:43 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_push_params(int ac, char **av)
{
	int i;

	i = 1;
	t_list list_param;
	t_list *navig;
	navig = *list_param;
	while ( i < argc - 1)
	{
		navig = ft_create_elem(av[i]);
		navig = navig->next;
	}
	return (*list_param);
}
