/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:36:42 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/18 16:27:46 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	j;

	j = 0;
	i = 0;
	n = 1;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\f'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		j = j * 10 + (nptr[i] - 48);
		i++;
	}
	return (n * j);
}

int	main(int ac, char **av)
{
	int i;
	int *stacka;
	int n;
	int a = ac - 1;

	i = 0;
	n = 1;
	if (ac > 1)
	{
		stacka = malloc (sizeof (int) * a);
		i = 0;
		while (av[n])
		{
			stacka[i] = ft_atoi(av[n]);
			i++;
			n++;
		}
		i = 0;
		while (stacka[i])
		{
			printf("%d\n", stacka[i]);
			i++;
		}
	}
}
