/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:29:22 by vloth             #+#    #+#             */
/*   Updated: 2022/02/03 15:11:25 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

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

// Proto
// push_swap begin
void	init_stacka(char **av, t_list *l);
void	push_back_list_for_a(t_list *l, int x);

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

// utilitaire
int		ft_atoi(const char *nptr);
size_t	ft_strlen(char *s);
void	ft_putstr_fd(char *s, int fd);

// Sort 3 a 5
void	threesort(t_list *la, int a, int b, int c);
void	threesort_exept(t_list *la, int a, int b, int c);
void	threesort_gene(t_list *la);
void	fivesort(t_list *la, t_list *lb);
void	foursort(t_list *la, t_list *lb, t_node *tmp);
void	pb_the_smallest(t_list *la, t_list *lb, t_node *tmp);
int		who_is_smallest(t_list *la, t_node *tmp);

#endif