/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:16:03 by vloth             #+#    #+#             */
/*   Updated: 2022/03/19 16:41:27 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void		ft_duplicate(t_list *la)
{
	t_node	*tmp;
	t_node	*tmpp;

	tmp = la->begin;
	tmpp = la->begin->next;
	while (tmp != tmpp && tmp && tmpp)
	{
		if (tmp->value == tmpp->value)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		if (tmpp == la->end)
		{
			tmp = tmp->next;
			tmpp = tmp->next;
		}
		else
			tmpp = tmpp->next;
	}
}
