/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:21:36 by vloth             #+#    #+#             */
/*   Updated: 2022/03/22 18:53:38 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	smallest_median(t_list *la)
{
	t_node	*tmp;
	int		a;
	int		b;
	int		i;

	a = get_median(la);
	b = 0;
	i = 0;
	tmp = la->begin;
	while (tmp)
	{
		if (tmp->value < a)
		{
			b = b + tmp->value;
			i++;
		}
		tmp = tmp->next;
	}
	b = b / i;
	return (b);
}

int	biggest_median(t_list *la)
{
	t_node	*tmp;
	int		a;
	int		b;
	int		i;

	a = get_median(la);
	b = 0;
	i = 0;
	tmp = la->begin;
	while (tmp)
	{
		if (tmp->value >= a)
		{
			b = b + tmp->value;
			i++;
		}
		tmp = tmp->next;
	}
	b = b / i;
	return (b);
}

int	the_smallest(t_list *la)
{
	t_node	*tmp;
	t_node	*smallest;
	int		a;

	tmp = la->begin;
	smallest = la->begin;
	while (tmp)
	{
		if (smallest->value > tmp->value)
			smallest = tmp;
		tmp = tmp->next;
	}
	a = smallest->value;
	return (a);
}

int	the_biggest(t_list *la)
{
	t_node	*tmp;
	t_node	*biggest;
	int		a;

	tmp = la->begin;
	biggest = la->begin;
	while (tmp)
	{
		if (biggest->value < tmp->value)
			biggest = tmp;
		tmp = tmp->next;
	}
	a = biggest->value;
	return (a);
}

void	first_quarter(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;
	int		i;
	int		lengtha;

	i = 1;
	lengtha = la->length;
	tmp = la->begin;
	a = smallest_median(la);
	while (i <= lengtha)
	{
		if (tmp->value >= a && la->length > 1)
			ra(la);
		else if (tmp->value < a)
			pb(la, lb);
		i++;
		tmp = la->begin;
	}
}
