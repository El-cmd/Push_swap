/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:50:49 by vloth             #+#    #+#             */
/*   Updated: 2022/02/10 13:34:06 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	best_index(int a, int b)
{
	int	i;

	i = 1;
	if (a < (b / 2))
	{
		while (a != 1)
		{
			a--;
			i++;
		}
	}
	else
	{
		while (a != b)
		{
			a++;
			i++;
		}
	}
	return (i);
}

int	best_move(t_list *l)
{
	int	a;
	int	b;
	int	c;
	int	i;
	int	y;

	a = position_element(l, smallest_sb(l));
	b = position_element(l, biggest_sb(l));
	c = l->length;
	i = best_index(a, c);
	y = best_index(b, c);
	if (i <= y)
		return (1);
	return (0);
}

int	begin_or_end(int a, int b)
{
	if (a >= b / 2)
		return (0);
	else
		return (1);
}

void	sort_smallest(t_list *lb)
{
	t_node	*tmp;

	tmp = lb->begin;
	if (begin_or_end(position_element(lb, smallest_sb(lb)), lb->length))
	{
		while (tmp != smallest_sb(lb))
		{
			rb(lb);
			tmp = lb->begin;
		}
	}
	else
	{
		while (tmp != smallest_sb(lb))
		{
			rrb(lb);
			tmp = lb->begin;
		}
	}
}

void	sort_biggest(t_list *lb)
{
	t_node	*tmp;

	tmp = lb->begin;
	if (begin_or_end(position_element(lb, biggest_sb(lb)), lb->length))
	{
		while (tmp != smallest_sb(lb))
		{
			rb(lb);
			tmp = lb->begin;
		}
	}
	else
	{
		while (tmp != biggest_sb(lb))
		{
			rrb(lb);
			tmp = lb->begin;
		}
	}
}
