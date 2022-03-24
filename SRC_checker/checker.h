/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:30:51 by vloth             #+#    #+#             */
/*   Updated: 2022/03/24 13:47:41 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "src/get-nl/get_next_line.h"

# define SA 1
# define SB 2
# define SS 3
# define RA 4
# define RB 5
# define RR 6
# define RRA 7
# define RRB 8
# define RRR 9
# define PA 10
# define PB 11

// def de maillon liste
typedef struct t_node
{
	int				value;
	struct t_node	*back;
	struct t_node	*next;
}t_node;

// def de double liste
typedef struct t_list
{
	int				length;
	struct t_node	*begin;
	struct t_node	*end;
}t_list;

typedef struct t_datas
{
	t_list	*stacka;
	t_list	*stackb;
}t_datas;

// gestion dlist
t_list	*new_dlist(void);
int		is_empty_list(t_list *l);
int		list_length(t_list *l);
int		first_list(t_list *l);
int		last_list(t_list *l);
void	push_back_list(t_list *l, t_node *element);
void	push_front_list(t_list *l, t_node *element);
void	print_list(t_list *l);
t_node	*pop_front_list(t_list *l);
void	init_stacka(char **av, t_list *l);

// operation
void	rotate(t_list *l, t_node *tmp);
void	reverse_rotate(t_list *l, t_node *tmp);
void	sa(t_list *l);
void	sb(t_list *l);
void	ss(t_list *la, t_list *lb);
void	ra(t_list *l);
void	rb(t_list *l);
void	rr(t_list *la, t_list *lb);
void	rra(t_list *l);
void	rrb(t_list *l);
void	rrr(t_list *la, t_list *lb);
void	pa(t_list *la, t_list *lb);
void	pb(t_list *la, t_list *lb);

// utilitaire
int64_t	ft_atoi(const char *nptr);
size_t	ft_strlen(char *s);
void	ft_putstr_fd(char *s, int fd);

// checker

void	do_op(t_list *la, t_list *lb);
void	its_sorted(t_list *la, t_list *lb);
int		is_number(char *av);
int		numbers(int ac, char **av);
void	free_list(t_list *la);
void	ft_duplicate(t_list *la);

#endif
