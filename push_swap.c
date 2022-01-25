/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:36:42 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/25 16:03:06 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_all	all;
	int		i;

	i = 0;
	init_stack(av, ac, all.datas);
	while (all.datas->stacka[i])
	{
		printf("%d\n", all.datas->stacka[i]);
		i++;
	}
	rra(all.datas->stacka);
	i = 0;
	while (all.datas->stacka[i])
	{
		printf("%d\n", all.datas->stacka[i]);
		i++;
	}
}
