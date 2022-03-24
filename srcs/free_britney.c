/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_britney.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:22:16 by vloth             #+#    #+#             */
/*   Updated: 2022/03/24 13:25:28 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_list(t_list *la)
{
	t_node	*tmp;

	tmp = la->begin;
	while (tmp)
	{
		tmp = pop_front_list(la);
		tmp = la->begin;
	}
}
