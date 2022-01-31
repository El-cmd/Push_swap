/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_ss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 04:44:16 by vloth             #+#    #+#             */
/*   Updated: 2022/01/31 04:56:55 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrr(t_list la, t_list lb)
{
	t_node	*tmp;

	if (is_empty_list(la) == 0)
		reverse_rotate(la, tmp);
	if (is_empty_list(lb) == 0)
		reverse_rotate(lb);
	ft_putstr("rrr\n", 1);
}

