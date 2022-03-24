/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 02:11:24 by vloth             #+#    #+#             */
/*   Updated: 2022/03/19 14:02:02 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
		if (ft_atoi(av[i]) <= -2147483648 || ft_atoi(av[i]) >= 2147483647 \
			|| ft_strlen(av[i]) > 11)
		{
			ft_putstr_fd("Error \n", 2);
			exit(1);
		}
		push_back_list_for_a(l, ft_atoi(av[i]));
		i++;
	}
}
