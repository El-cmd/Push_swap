/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:05:08 by vloth             #+#    #+#             */
/*   Updated: 2022/01/28 20:26:15 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	new_dlist(void)
{
	return (NULL);
}

int	is_empty_list(t_list l)
{
	if (l == NULL)
		return (1);
	return (0);
}

int	list_length(t_list l)
{
	if (is_empty_list(l))
		return (0);
	return (l->length);
}

int	first_list(t_list l)
{
	if (is_empty_list(l))
		exit(1);
	return (l->begin->value);
}

int	last_list(t_list l)
{
	if (is_empty_list(l))
		exit(1);
	return (l->end->value);
}
