/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:15:04 by vloth             #+#    #+#             */
/*   Updated: 2022/01/29 19:55:53 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	push_back_list(t_list l, int x)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		exit(1);
	element->value = x;
	if (is_empty_list(l))
	{
		l = malloc(sizeof(*l));
		if (!l)
			exit(1);
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
	return (l);
}

t_list	push_front_list(t_list l, int x)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		exit(1);
	element->value = x;
	if (is_empty_list(l))
	{
		l = malloc(sizeof(*l));
		if (!l)
			exit(1);
		l->length = 0;
		l->begin = element;
		l->end = element;
	}
	else
	{
		l->begin->back = element;
		element->next = l->begin;
		l->begin = element;
	}
	l->length++;
	return (l);
}

void	print_list(t_list l)
{
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	tmp = l->begin;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}
