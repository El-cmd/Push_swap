/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:54:37 by vlothlinux        #+#    #+#             */
/*   Updated: 2022/01/19 04:37:11 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct ps_datas
{
	int	nb_total;
	int	*stacka;
	int	*stackb;
}	t_datas;

typedef struct ps_all
{
	t_datas	datas[1];
}	t_all;

int		ft_atoi(const char *nptr);
void	init_stack(char **av, int ac, t_datas *datas);
void	ft_putstr_fd(char *s, int fd);
void	sa(int *tab);
void	sb(int *tab);
void	ss(int *taba, int *tabb);
void	ra(int *taba);
void	rb(int *tabb);

#endif