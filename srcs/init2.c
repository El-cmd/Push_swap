/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:15:04 by vloth             #+#    #+#             */
/*   Updated: 2022/02/01 23:44:57 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_back_list(t_list *l, int x)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		exit(1);
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

void	push_front_list(t_list *l, int x)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		exit(1);
	element->value = x;
	if (l->length == 0)
	{
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
}

void	print_list(t_list *l)
{
	t_node	*tmp;

	//if (!tmp)
	//{
	//	exit (1);
	//}
	if (is_empty_list(l))
	{
		free(tmp);
		tmp = NULL;
		return ;
	}
	tmp = l->begin;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

void	pop_front_list(t_list *l)
{
	t_node	*tmp;

	if (is_empty_list(l))
		return ;
	tmp = l->begin;
	if (l->begin == l->end)
	{
		free(tmp);
		tmp = NULL;
		free(l);
		l = NULL;
		return ;
	}
	l->begin = l->begin->next;
	l->begin->back = NULL;
	tmp->next = NULL;
	tmp->back = NULL;
	free(tmp);
	tmp = NULL;
	l->length--;
}
