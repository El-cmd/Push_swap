/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 05:43:11 by vloth             #+#    #+#             */
/*   Updated: 2022/03/24 13:25:40 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
