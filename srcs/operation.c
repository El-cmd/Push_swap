/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 04:05:13 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/19 04:36:58 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(int *tab)
{
	int	swap;

	swap = tab[0];
	tab[0] = tab[1];
	tab[1] = swap;
	ft_putstr_fd("sa\n", 1);
}

void	sb(int *tab)
{
	int	swap;

	swap = tab[0];
	tab[0] = tab[1];
	tab[1] = swap;
	ft_putstr_fd("sb\n", 1);
}

void	ss(int *taba, int *tabb)
{
	int	swap;

	swap = taba[0];
	taba[0] = taba[1];
	taba[1] = swap;
	swap = tabb[0];
	tabb[0] = tabb[1];
	tabb[1] = swap;
	ft_putstr_fd("ss\n", 1);
}
