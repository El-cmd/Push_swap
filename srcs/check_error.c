/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 03:04:41 by vloth             #+#    #+#             */
/*   Updated: 2022/03/19 16:41:23 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	its_sorted(t_list *la, t_list *lb)
{
	t_node	*tmp;

	tmp = la->begin;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
		{
			ft_putstr_fd("KO\n", 1);
			return ;
		}
		tmp = tmp->next;
	}
	tmp = lb->begin;
	if (tmp)
		ft_putstr_fd("KO\n", 1);
	ft_putstr_fd("OK\n", 1);
}

int	is_number(char *av)
{
	int	i;

	i = 0;
	while (av[i] == ' ' || (av[i] >= 9 && av[i] <= 13))
		i++;
	if (av[i] == '-' || av[i] == '+')
		i++;
	while (av[i] != '\0')
	{
		if (!(av[i] >= '0' && av[i] <= '9'))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int	numbers(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_number(av[i]) == 0)
			exit(1);
		i++;
	}
	return (1);
}

void		ft_duplicate(t_list *la)
{
	t_node	*tmp;
	t_node	*tmpp;

	tmp = la->begin;
	tmpp = la->begin->next;
	while (tmp != tmpp && tmp && tmpp)
	{
		if (tmp->value == tmpp->value)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		if (tmpp == la->end)
		{
			tmp = tmp->next;
			tmpp = tmp->next;
		}
		else
			tmpp = tmpp->next;
	}
}
