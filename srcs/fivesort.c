/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivesort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:03:30 by vloth             #+#    #+#             */
/*   Updated: 2022/02/03 02:35:33 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	foursort_exept(t_list *la, t_node *tmp)
{
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
	pb(la, lb);
	threesort_gene(la);
	pa(la, lb);
	if (foursort_exept(la, tmp))
		return ;
	if (tmp->value < tmp->next->value)
		return ;
	if (tmp->value > tmp->next->value && tmp->value < tmp->next->next->value)
	{
		sa(la);
		return ;
	}
	if (tmp->value < tmp->next->next->next->value
		&& tmp->value > tmp->next->next->value)
	{
		rra(la);
		sa(la);
		ra(la);
		ra(la);
		return ;
	}
	if (tmp->value > tmp->next->next->next->value)
		ra(la);
	return ;
}

void	fivesort(t_list *la, t_list *lb)
{
	t_node	*tmp;

	tmp = la->begin;
	if (la->length == 4)
	{
		foursort(la, lb, tmp);
		return ;
	}
	if (la->length == 5)
	{
		pb(la, lb);
		pb(la,lb);
		threesort_gene(t_list *la);
	}
}
