/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:05:08 by vloth             #+#    #+#             */
/*   Updated: 2022/02/01 23:26:16 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*new_dlist(void)
{
	t_list	*l;

	l = malloc(sizeof(*l));
	l->begin  = NULL;
	l->end = NULL;
	l->length = 0;
	return (l);
}

int	is_empty_list(t_list *l)
{
	int	i;

	i = 0;
	if (l->begin == NULL)
	{
		i++;
		return (i);
	}
	return (0);
}

int	list_length(t_list *l)
{
	return (l->length);
}

int	first_list(t_list *l)
{
	if (is_empty_list(l))
		exit(1);
	return (l->begin->value);
}

int	last_list(t_list *l)
{
	if (is_empty_list(l))
		exit(1);
	return (l->end->value);
}
