/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:30:24 by vloth             #+#    #+#             */
/*   Updated: 2022/03/24 13:45:10 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_datas	tt;

	if (ac == 0 || ac == 1)
		return (0);
	numbers(ac, av);
	tt.stacka = new_dlist();
	init_stacka(av, tt.stacka);
	tt.stackb = new_dlist();
	ft_duplicate(tt.stacka);
	do_op(tt.stacka, tt.stackb);
	its_sorted(tt.stacka, tt.stackb);
	free_list(tt.stacka);
	return (0);
}
