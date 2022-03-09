/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:50:04 by vloth             #+#    #+#             */
/*   Updated: 2022/03/09 17:06:35 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	gnl_op_s(char *op)
{
	if (op[0] == 'p' && op[1] == 'a' && op[2] == '\n')
		return (PA);
	else if (op[0] == 'p' && op[1] == 'b' && op[2] == '\n')
		return (PB);
	else if (op[0] == 'r' && op[1] == 'r' && op[2] == 'a')
		return (RRA);
	else if (op[0] == 'r' && op[1] == 'r' && op[2] == 'b')
		return (RRB);
	else if (op[0] == 'r' && op[1] == 'r' && op[2] == 'r')
		return (RRR);
	return (0);
}

int	gnl_op(void)
{
	char *op;

	op = get_next_line(0);
	if (!op)
		return (0);
	if (op[0] == 's' && op[1] == 'a' && op[2] == '\n')
		return (SA);
	else if (op[0] == 's' && op[1] == 'b' && op[2] == '\n')
		return (SB);
	else if (op[0] == 's' && op[1] == 's' && op[2] == '\n')
		return (SS);
	else if (op[0] == 'r' && op[1] == 'a' && op[2] == '\n')
		return (RA);
	else if (op[0] == 'r' && op[1] == 'b' && op[2] == '\n')
		return (RB);
	else if (op[0] == 'r' && op[1] == 'r' && op[2] == '\n')
		return (RR);
	else
		return (gnl_op_s(op));
	return 0;
}

void	do_op_s(t_list *la, t_list *lb, int i)
{
	if (i == 8)
		rrb(lb);
	else if (i == 9)
		rrr(la, lb);
	else if (i == 10)
		pa(la, lb);
	else if (i == 11)
		pb(la, lb);
}

void	do_op(t_list *la, t_list *lb)
{
	int	i;

	i = 1;
	while (i > 0)
	{
		i = gnl_op();
		if (i == 1)
			sa(la);
		else if (i == 2)
			sb(lb);
		else if (i == 3)
			ss(la, lb);
		else if (i == 4)
			ra(la);
		else if (i == 5)
			rb(lb);
		else if (i == 6)
			rr(la, lb);
		else if (i == 7)
			rra(la);
		else
			do_op_s(la, lb, i);
	}
}
