/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:43:10 by vloth             #+#    #+#             */
/*   Updated: 2022/02/07 21:59:20 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_median(t_list *l)
{
	t_node	*tmp;
	int		a;

	a = 0;
	tmp = l->begin;
	while (tmp)
	{
		a = a + tmp->value;
		tmp = tmp->next;
	}
	a = a / l->length;
	printf("a = %d\n", a);
	return (a);
}

void	sort_a_and_b(t_list *la, t_list *lb)
{
	int		a;
	t_node	*tmp;
	int		i;
	int		lengtha;

	i = 1;
	lengtha = la->length;
	tmp = la->begin;
	a = get_median(la);
	while (i <= lengtha)
	{
		if (tmp->value > a && la->length > 1)
			ra(la);
		else if (tmp->value < a)
			pb(la, lb);
		i++;
		tmp = la->begin;
	}
}
