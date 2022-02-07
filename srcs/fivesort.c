/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivesort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:03:30 by vloth             #+#    #+#             */
/*   Updated: 2022/02/07 19:22:40 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	foursort_exept(t_list *la, t_node *tmp)
{
	tmp = la->begin;
	if (tmp->value == tmp->next->value)
		return (1);
	if (tmp->value == tmp->next->next->value)
	{
		sa(la);
		return (1);
	}
	if (tmp->value == la->end->value)
	{
		ra(la);
		return (1);
	}
	return (0);
}

void	foursort(t_list *la, t_list *lb, t_node *tmp)
{
	threesort_gene(la);
	pa(la, lb);
	tmp = la->begin;
	if (foursort_exept(la, tmp))
		return ;
	else if (tmp->value < tmp->next->value)
		return ;
	else if (tmp->value > tmp->next->value
		&& tmp->value < tmp->next->next->value)
	{
		sa(la);
		return ;
	}
	else if (tmp->value < tmp->next->next->next->value
		&& tmp->value > tmp->next->next->value)
	{
		rra(la);
		sa(la);
		ra(la);
		ra(la);
		return ;
	}
	else if (tmp->value > tmp->next->next->next->value)
		ra(la);
	return ;
}

int	who_is_smallest(t_node *tmp)
{
	int	a;

	a = tmp->value;
	while (tmp)
	{
		if (a > tmp->value)
			a = tmp->value;
		tmp = tmp->next;
	}
	return (a);
}

int	is_already_sort(t_list *la)
{
	t_node	*tmp;

	tmp = la->begin;
	if (la->length == 4)
	{
		if (tmp->value <= tmp->next->value
			&& tmp->next->value <= tmp->next->next->value
			&& tmp->next->next->value <= la->end->value)
			return (1);
		return (0);
	}
	if (la->length == 5)
	{
		if (tmp->value <= tmp->next->value
			&& tmp->next->value <= tmp->next->next->value
			&& tmp->next->next->value <= la->end->back->value
			&& la->end->back->value <= la->end->value)
			return (1);
		return (0);
	}
	return (0);
}

void	fivesort(t_list *la, t_list *lb)
{
	t_node	*tmp;

	if (is_already_sort(la))
		return ;
	tmp = la->begin;
	if (la->length == 4)
	{
		pb(la, lb);
		foursort(la, lb, tmp);
		return ;
	}
	if (la->length == 5)
	{
		pb_the_smallest(la, lb, tmp);
		pb(la, lb);
		foursort(la, lb, tmp);
		pa(la, lb);
	}
}
