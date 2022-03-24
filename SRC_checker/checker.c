/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:30:24 by vloth             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/24 13:29:55 by vloth            ###   ########.fr       */
=======
/*   Updated: 2022/03/09 17:08:31 by vloth            ###   ########.fr       */
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_datas	tt;

<<<<<<< HEAD
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
=======
	if (ac == 0)
		return (0);
	tt.stacka = new_dlist();
	init_stacka(av, tt.stacka);
	tt.stackb = new_dlist();
	do_op(tt.stacka, tt.stackb);
	print_list(tt.stacka);
	return (0);
}
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4
