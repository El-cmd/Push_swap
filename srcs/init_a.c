/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:56:34 by vloth             #+#    #+#             */
/*   Updated: 2022/02/01 10:30:44 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_stacka(char **av, t_list *l)
{
	int	i;

	i = 1;
	while (av[i])
	{
		push_back_list(l, ft_atoi(av[i]));
		i++;
	}
}
