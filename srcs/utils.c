/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:54:27 by vloth             #+#    #+#             */
/*   Updated: 2022/03/24 04:12:59 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int64_t	ft_atoi(const char *nptr)
{
	int64_t	i;
	int64_t	n;
	int64_t	j;

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

size_t	ft_strlen(char *s)
{
	unsigned int	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s)
	{
		i = ft_strlen(s);
		write(fd, s, i);
	}
}

void	ft_la_dualite(t_list *la)
{
	t_node *tmp;

	tmp = la->begin;
	if (tmp->value > tmp->next->value)
		sa(la);	
}
