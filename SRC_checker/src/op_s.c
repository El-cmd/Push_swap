/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:50:26 by vloth             #+#    #+#             */
/*   Updated: 2022/03/07 02:16:12 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rotate(t_list *l, t_node *tmp)
{
	int	swap;

	tmp = l->begin;
	swap = tmp->value;
	while (tmp->next != NULL)
	{
		tmp->value = tmp->next->value;
		tmp = tmp->next;
	}
	tmp->value = swap;
}

void	reverse_rotate(t_list *l, t_node *tmp)
{
	int	swap;

	tmp = l->end;
	swap = tmp->value;
	while (tmp->back != NULL)
	{
		tmp->value = tmp->back->value;
		tmp = tmp->back;
	}
	tmp->value = swap;
}

void	rr(t_list *la, t_list *lb)
{
	t_node	*tmp;

	tmp = NULL;
	if (is_empty_list(la) == 0)
		rotate(la, tmp);
	if (is_empty_list(lb) == 0)
		rotate(lb, tmp);
}

void	rra(t_list *l)
{
	t_node	*tmp;

	tmp = NULL;
	if (is_empty_list(l))
		return ;
	reverse_rotate(l, tmp);
}

void	rrb(t_list *l)
{
	t_node	*tmp;

	tmp = NULL;
	if (is_empty_list(l))
		return ;
	reverse_rotate(l, tmp);
}