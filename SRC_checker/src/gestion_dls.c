/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_dls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:43:43 by vloth             #+#    #+#             */
/*   Updated: 2022/03/07 02:15:17 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	push_back_list(t_list *l, t_node *element)
{
	if (is_empty_list(l))
	{
		l->begin = element;
		l->end = element;
		l->length++;
		element->back = NULL;
		element->next = NULL;
	}
	else
	{
		element->next = NULL;
		element->back = l->end;
		l->end->next = element;
		l->end = element;
	}
	l->length++;
}

void	push_front_list(t_list *l, t_node *element)
{
	if (is_empty_list(l))
	{
		l->begin = element;
		l->end = element;
		element->back = NULL;
		element->next = NULL;
	}
	else
	{
		element->back = NULL;
		element->next = l->begin;
		l->begin->back = element;
		l->begin = element;
	}
	l->length++;
}

void	print_list(t_list *l)
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

t_node	*pop_front_list(t_list *l)
{
	t_node	*tmp;

	if (l->length > 1)
	{
		tmp = l->begin;
		l->begin = l->begin->next;
		l->begin->back = NULL;
		l->length--;
	}
	else
	{
		tmp = l->begin;
		l->begin = NULL;
		l->end = NULL;
		l->length = 0;
	}
	return (tmp);
}