/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:03:07 by vloth             #+#    #+#             */
/*   Updated: 2022/02/01 09:30:34 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list *l)
{
	int		swap;
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	tmp = l->begin;
	swap = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = swap;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list *l)
{
	int		swap;
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	tmp = l->begin;
	swap = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = swap;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list *la, t_list *lb)
{
	int		swap;
	t_node	*tmp;

	if (is_empty_list(la) == 0)
	{
		tmp = la->begin;
		swap = tmp->value;
		tmp->value = tmp->next->value;
		tmp->next->value = swap;
	}
	if (is_empty_list(lb) == 0)
	{
		tmp = lb->begin;
		swap = tmp->value;
		tmp->value = tmp->next->value;
		tmp->next->value = swap;
	}
	ft_putstr_fd("ss\n", 1);
}

void	ra(t_list *l)
{
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	rotate(l, tmp);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list *l)
{
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	rotate(l, tmp);
	ft_putstr_fd("rb\n", 1);
}
