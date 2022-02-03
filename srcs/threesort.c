/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threesort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:57:56 by vloth             #+#    #+#             */
/*   Updated: 2022/02/03 15:12:02 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	threesort(t_list *la, int a, int b, int c)
{
	if (a > b && a < c)
	{
		sa(la);
		return ;
	}
	if (a > b && a > c && b > c)
	{
		sa(la);
		rra(la);
		return ;
	}
	if (a > b && a > c && b < c)
	{
		ra(la);
		return ;
	}
	if (a < b && a < c && b > c)
	{
		sa(la);
		ra(la);
		return ;
	}
	if (a < b && a > c)
		rra(la);
	return ;
}

void	threesort_exept(t_list *la, int a, int b, int c)
{
	if (a > b && c == b)
		ra(la);
	if (a < b && c == b)
		return ;
	if (a == b && c > b)
		return ;
	if (a == b && c < b)
		rra(la);
	if (a == c && b < a)
		sa(la);
	if (a == c && b > a)
		rra(la);
	return ;
}

void	threesort_gene(t_list *la)
{
	t_node	*tmp;
	int		a;
	int		b;
	int		c;

	tmp = la->begin;
	a = tmp->value;
	b = tmp->next->value;
	c = tmp->next->next->value;
	if (a < b && b < c)
		return ;
	if (a != b && a != c && c != b)
		threesort(la, a, b, c);
	else
		threesort_exept(la, a, b, c);
	return ;
}

void	pb_the_smallest(t_list *la, t_list *lb, t_node *tmp)
{
	tmp = la->begin;
	if (who_is_smallest(la, tmp) == tmp->value)
		pb(la, lb);
	else if (who_is_smallest(la, tmp) == tmp->next->value)
	{
		sa(la);
		pb(la, lb);
	}
	else if (who_is_smallest(la, tmp) == tmp->next->next->value)
	{
		ra(la);
		ra(la);
		pb(la, lb);
	}
	else if (who_is_smallest(la, tmp) == la->end->back->value)
	{
		rra(la);
		rra(la);
		pb(la, lb);
	}
	else if (who_is_smallest(la, tmp) == la->end->value)
	{
		rra(la);
		pb(la, lb);
	}
}
