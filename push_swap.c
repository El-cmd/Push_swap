/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:27:46 by vloth             #+#    #+#             */
/*   Updated: 2022/02/09 04:58:41 by vloth            ###   ########.fr       */
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
	sort_a_and_b(tt.stacka, tt.stackb);
	printf("stack a: \n");
	print_list(tt.stacka);
	printf("stack b: \n");
	print_list(tt.stackb);
	printf("le plus petit de b est : %d\n", smallest_sb(tt.stackb)->value);
	printf("le plus grand de b est : %d\n", biggest_sb(tt.stackb)->value);
	printf("la position du plus petit est : %d\n", position_element(tt.stackb, smallest_sb(tt.stackb)));
	printf("la position du plus grand est : %d\n", position_element(tt.stackb, biggest_sb(tt.stackb)));
	return (0);
}
