/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:27:46 by vloth             #+#    #+#             */
/*   Updated: 2022/02/02 19:20:53 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_datas	tt;

	tt.stacka = new_dlist();
	init_stacka(av, tt.stacka);
	tt.stackb = new_dlist();
	printf("stack a: \n");
	print_list(tt.stacka);
	printf("stack b: \n");
	print_list(tt.stackb);
	pb(tt.stacka, tt.stackb);
	printf("stack a =\n");
	print_list(tt.stacka);
	printf("stack b =\n");
	print_list(tt.stackb);
	rrr(tt.stacka, tt.stackb);
	printf("stack a =\n");
	print_list(tt.stacka);
	printf("stack b =\n");
	print_list(tt.stackb);
	return (0);
}
