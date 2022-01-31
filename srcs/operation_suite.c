/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_suite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:58:26 by vloth             #+#    #+#             */
/*   Updated: 2022/01/31 04:45:39 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_list l, t_node *tmp)
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

void	reverse_rotate(t_list l, t_node *tmp)
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

void	rr(t_list la, t_list lb)
{
	t_node	*tmp;

	if (is_empty_list(la) == 0)
		rotate(la, tmp);
	if (is_empty_list(lb) == 0)
		rotate(lb, tmp);
	ft_putstr_fd("rr\n", 1);
}

void	rra(t_list l)
{
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	reverse_rotate(l, tmp);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list l)
{
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	reverse_rotate(l, tmp);
	ft_putstr_fd("rrb\n");
}

