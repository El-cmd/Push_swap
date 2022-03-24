/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:12:13 by vloth             #+#    #+#             */
/*   Updated: 2022/03/19 13:45:54 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	its_sorted(t_list *la, t_list *lb)
{
	t_node *tmp;

	tmp = la->begin;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
		{
			ft_putstr_fd("KO\n", 1);
			free_list(la);
			return ;
		}
		tmp = tmp->next;
	}
	tmp = lb->begin;
	if (tmp)
		ft_putstr_fd("KO\n", 1);
	ft_putstr_fd("OK\n", 1);
}

int		is_number(char *av)
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

int		numbers(int ac, char **av)
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
