/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_suite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:43:15 by vloth             #+#    #+#             */
/*   Updated: 2022/01/25 16:15:16 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rr(int *taba, int *tabb)
{
	int	swap;
	int	i;
	int	b;

	i = 0;
	b = i + 1;
	swap = taba[0];
	while (taba[b])
	{
		taba[i] = taba[b];
		i++;
		b++;
	}
	taba[b - 1] = swap;
	i = 0;
	b = i + 1;
	swap = tabb[0];
	while (tabb[b])
	{
		tabb[i] = tabb[b];
		i++;
		b++;
	}
	tabb[b - 1] = swap;
	ft_putstr_fd("rr\n", 1);
}

void	rra(int *taba)
{
	int	swap;
	int	i;
	int	b;

	i = ft_strlen_int(taba) - 1;
	b = i - 1;
	swap = taba[i];
	while (taba[b])
	{
		taba[i] = taba[b];
		i--;
		b--;
	}
	taba[b + 1] = swap;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(int *tabb)
{
	int	swap;
	int	i;
	int	b;

	i = ft_strlen_int(tabb) - 1;
	b = i - 1;
	swap = tabb[i];
	while (tabb[b])
	{
		tabb[i] = tabb[b];
		i--;
		b--;
	}
	tabb[b + 1] = swap;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(int *taba, int *tabb)
{
	int	swap;
	int	i;
	int	b;

	i = ft_strlen_int(taba) - 1;
	b = i - 1;
	swap = taba[i];
	while (taba[b])
	{
		taba[i] = taba[b];
		i--;
		b--;
	}
	taba[b + 1] = swap;
	i = ft_strlen_int(tabb) - 1;
	b = i - 1;
	swap = tabb[i];
	while (tabb[b])
	{
		tabb[i] = tabb[b];
		i--;
		b--;
	}
	tabb[b + 1] = swap;
	ft_putstr_fd("rrr\n", 1);
}
