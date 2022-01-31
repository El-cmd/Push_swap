/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:27:46 by vloth             #+#    #+#             */
/*   Updated: 2022/01/31 04:48:17 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	stacka;
	t_list	stackb = NULL;

	stacka = init_stacka(av, stacka);
	// Pour voir la stack a
	if (is_empty_list(stacka))
		printf("liste vide\n");
	else
		printf("Elle contient des trucs\n");
	print_list(stacka);
	rrr(stacka, stackb);
	print_list(stacka);
	return (0);
}
