/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:52:18 by vloth             #+#    #+#             */
/*   Updated: 2022/03/07 02:16:16 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rrr(t_list *la, t_list *lb)
{
	t_node	*tmp;

	tmp = NULL;
	if (is_empty_list(la) == 0)
		reverse_rotate(la, tmp);
	if (is_empty_list(lb) == 0)
		reverse_rotate(lb, tmp);
}

void	pa(t_list *la, t_list *lb)
{
	t_node	*element;

	if (is_empty_list(lb))
		return ;
	if (is_empty_list(lb) == 0)
	{
		element = pop_front_list(lb);
		push_front_list(la, element);
	}
}

void	pb(t_list *la, t_list *lb)
{
	t_node	*element;

	if (is_empty_list(la))
		return ;
	if (is_empty_list(la) == 0)
	{
		element = pop_front_list(la);
		push_front_list(lb, element);
	}
}