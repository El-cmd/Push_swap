/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:30:24 by vloth             #+#    #+#             */
/*   Updated: 2022/03/09 17:08:31 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_datas	tt;

	if (ac == 0)
		return (0);
	tt.stacka = new_dlist();
	init_stacka(av, tt.stacka);
	tt.stackb = new_dlist();
	do_op(tt.stacka, tt.stackb);
	print_list(tt.stacka);
	return (0);
}