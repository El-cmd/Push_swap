/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:56:34 by vloth             #+#    #+#             */
/*   Updated: 2022/02/02 19:20:00 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_back_list_for_a(t_list *l, int x)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return ;
	element->value = x;
	element->next = NULL;
	element->back = NULL;
	if (l->length == 0)
	{
		l->length = 0;
		l->begin = element;
		l->end = element;
	}
	else
	{
		l->end->next = element;
		element->back = l->end;
		l->end = element;
	}
	l->length++;
}

void	init_stacka(char **av, t_list *l)
{
	int		i;

	i = 1;
	while (av[i])
	{
		push_back_list_for_a(l, ft_atoi(av[i]));
		i++;
	}
}
