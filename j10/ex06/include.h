/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:29:28 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 10:00:35 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H
# include <unistd.h>
# include "op.h"

typedef struct	s_op{
	char		op;
	int			(*calc_op)(int, int);
}				t_op;

t_op			g_tab[5] =
{
	{'+', &add},
	{'-', &substract},
	{'/', &divide},
	{'%', &modulo},
	{'*', &multiply}
};

#endif
