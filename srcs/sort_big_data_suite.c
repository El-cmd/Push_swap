/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_data_suite.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:39:15 by vloth             #+#    #+#             */
/*   Updated: 2022/03/22 21:01:49 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	now_bigger_a(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;

	tmp = la->begin;
	a = get_median(la);
	while (tmp->value >= a)
	{
		pb(la, lb);
		tmp = la->begin;
	}
}

void	sort_hundred(t_list *la, t_list *lb)
{
	while (lb->length > 0)
	{
		sort_smallest(lb);
		pa(la, lb);
		ra(la);
	}
}

void	real_sort_hundred(t_list *la, t_list *lb)
{
	sort_between(la, lb);
	now_bigger_a(la, lb);
	sort_hundred(la, lb);
}
