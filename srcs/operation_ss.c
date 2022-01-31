/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_ss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 04:44:16 by vloth             #+#    #+#             */
/*   Updated: 2022/01/31 06:33:56 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrr(t_list la, t_list lb)
{
	t_node	*tmp;

	if (is_empty_list(la) == 0)
		reverse_rotate(la, tmp);
	if (is_empty_list(lb) == 0)
		reverse_rotate(lb, tmp);
	ft_putstr_fd("rrr\n", 1);
}

/*void	pa(t_list la, t_list lb)
{
	t_node	*element;

	element = lb->begin;
	if (is_empty_list(lb) == 0)
	{
		la = push_front_list(la, element->value);
		pop_front_list(lb);
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list la, t_list lb)
{
	t_node	*element;

	element = la->begin;
	if (is_empty_list(la) == 0)
	{
		lb = push_front_list(lb, element->value);
		pop_front_list(la);
	}
	ft_putstr_fd("pb\n", 1);
}
*/