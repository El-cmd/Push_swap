/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:15:27 by vloth             #+#    #+#             */
/*   Updated: 2022/03/23 01:42:12 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	second_quarter(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;
	int		i;
	int		lengtha;
	int		b;

	i = 1;
	lengtha = la->length;
	tmp = la->begin;
	b = get_median(la);
	a = smallest_median(la);
	while (i <= lengtha)
	{
		if (tmp->value >= a && tmp->value < b)
			pb(la, lb);
		else
			ra(la);
		i++;
		tmp = la->begin;
	}
}

void	third_quarter(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;
	int		i;
	int		lengtha;
	int		b;

	i = 1;
	lengtha = la->length;
	tmp = la->begin;
	b = get_median(la);
	a = biggest_median(la);
	while (i <= lengtha)
	{
		if (tmp->value >= b && tmp->value < a)
			pb(la, lb);
		else
			ra(la);
		i++;
		tmp = la->begin;
	}
}

void	fourst_quarter(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;

	tmp = la->begin;
	a = biggest_median(la);
	while (la->begin->value > the_smallest(la))
	{
		if (tmp->value >= a)
			pb(la, lb);
		tmp = la->begin;
	}
}

void	sort_between(t_list *la, t_list *lb)
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

void	sort_five_hundred(t_list *la, t_list *lb)
{
	first_quarter(la, lb);
	sort_between(la, lb);
	second_quarter(la, lb);
	sort_between(la, lb);
	third_quarter(la, lb);
	sort_between(la, lb);
	fourst_quarter(la, lb);
	sort_between(la, lb);
}