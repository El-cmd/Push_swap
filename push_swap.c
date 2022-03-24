/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:27:46 by vloth             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/24 13:30:01 by vloth            ###   ########.fr       */
=======
/*   Updated: 2022/02/26 15:46:44 by vloth            ###   ########.fr       */
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_datas	tt;

	if (ac == 1 || ac == 0)
		exit(0);
	numbers(ac, av);
	tt.stacka = new_dlist();
	init_stacka(av, tt.stacka);
	tt.stackb = new_dlist();
	ft_duplicate(tt.stacka);
	if (ac == 3)
		ft_la_dualite(tt.stacka);
	if (ac == 4)
		threesort_gene(tt.stacka);
	if (ac >= 5 && ac <= 6)
		fivesort(tt.stacka, tt.stackb);
	if (ac >= 7 && ac <= 101)
	{
		sort_a_and_b(tt.stacka, tt.stackb);
		real_sort_hundred(tt.stacka, tt.stackb);
	}
	if (ac > 101)
		sort_five_hundred(tt.stacka, tt.stackb);
	free_list(tt.stacka);
	exit(0);
}
