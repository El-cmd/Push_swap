/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:46:17 by vloth             #+#    #+#             */
/*   Updated: 2022/03/07 02:16:21 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
	else
		return ;
}

void	ra(t_list *l)
{
	t_node	*tmp;

	tmp = NULL;
	if (is_empty_list(l))
		exit(1);
	rotate(l, tmp);
}

void	rb(t_list *l)
{
	t_node	*tmp;

	tmp = NULL;
	if (is_empty_list(l))
		exit(1);
	rotate(l, tmp);
}