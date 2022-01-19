/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 03:14:46 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/19 03:58:00 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_stack(char **av, int ac, t_datas *datas)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	datas->nb_total = ac - 1;
	datas->stacka = malloc(sizeof (int) * datas->nb_total);
	datas->stackb = malloc(sizeof (int) * datas->nb_total);
	while (av[i])
	{
		datas->stacka[n] = ft_atoi(av[i]);
		i++;
		n++;
	}
	datas->stacka[datas->nb_total] = '\0';
}
