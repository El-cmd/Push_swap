/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:50:49 by vloth             #+#    #+#             */
/*   Updated: 2022/02/09 06:45:08 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	best_move(t_list *l)
{
	int	a;
	int	b;
	int	c;
	int	i;

	a = position_element(l, smallest_sb(l));
	b = position_element(l, biggest_sb(l));
	c = l->length;
	i = 0;
	if (a < (c / 2))
	{
		while (a != 1)
		{
			a--;
			i++;
		}
	}
	if (a > ())
}
