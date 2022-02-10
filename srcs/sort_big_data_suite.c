/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_data_suite.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:39:15 by vloth             #+#    #+#             */
/*   Updated: 2022/02/10 12:22:02 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	real_sort_hundred(t_list *la, t_list *lb)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (lb->length > 0)
	{
		if (best_move(lb))
		{
			sort_smallest(lb);
			pa(la, lb);
			ra(la);
		}
		else if (best_move(lb) == 0)
		{
			sort_biggest(lb);
			pa(la, lb);
			i++;
		}
	}
	while (y < i)
	{
		ra(la);
		y++;
	}
}
