/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:43:10 by vloth             #+#    #+#             */
/*   Updated: 2022/02/09 04:54:36 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_median(t_list *l)
{
	t_node	*tmp;
	int		a;

	a = 0;
	tmp = l->begin;
	while (tmp)
	{
		a = a + tmp->value;
		tmp = tmp->next;
	}
	a = a / l->length;
	printf("a = %d\n", a);
	return (a);
}

void	sort_a_and_b(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;
	int		i;
	int		lengtha;

	i = 1;
	lengtha = la->length;
	tmp = la->begin;
	a = get_median(la);
	while (i <= lengtha)
	{
		if (tmp->value > a && la->length > 1)
			ra(la);
		else if (tmp->value < a)
			pb(la, lb);
		i++;
		tmp = la->begin;
	}
}

t_node	*smallest_sb(t_list *lb)
{
	t_node	*tmp;
	t_node	*smallest;

	tmp = lb->begin;
	smallest = lb->begin;
	while (tmp)
	{
		if (smallest->value > tmp->value)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}

t_node	*biggest_sb(t_list *lb)
{
	t_node	*tmp;
	t_node	*biggest;

	tmp = lb->begin;
	biggest = lb->begin;
	while (tmp)
	{
		if (biggest->value < tmp->value)
			biggest = tmp;
		tmp = tmp->next;
	}
	return (biggest);
}

int	position_element(t_list *l, t_node *elmt)
{
	int		i;
	t_node	*tmp;

	tmp = l->begin;
	i = 1;
	while (i <= l->length)
	{
		if (elmt == tmp)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (0);
}
