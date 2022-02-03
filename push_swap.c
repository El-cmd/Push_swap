/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:27:46 by vloth             #+#    #+#             */
/*   Updated: 2022/02/03 01:30:20 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_datas	tt;

	tt.stacka = new_dlist();
	init_stacka(av, tt.stacka);
	tt.stackb = new_dlist();
	if (ac == 4)
		threesort_gene(tt.stacka);
	if (ac >= 5 && ac <= 6)
		fivesort(tt.stacka, tt.stackb);
	printf("stack a: \n");
	print_list(tt.stacka);
	return (0);
}
