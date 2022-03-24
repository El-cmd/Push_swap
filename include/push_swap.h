/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:29:22 by vloth             #+#    #+#             */
/*   Updated: 2022/03/24 13:20:26 by vloth            ###   ########.fr       */
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
int64_t	ft_atoi(const char *nptr);
size_t	ft_strlen(char *s);
void	ft_putstr_fd(char *s, int fd);
int		get_median(t_list *l);

// Sort 3 a 5
void	ft_la_dualite(t_list *la);
void	threesort(t_list *la, int a, int b, int c);
void	threesort_exept(t_list *la, int a, int b, int c);
void	threesort_gene(t_list *la);
void	fivesort(t_list *la, t_list *lb);
void	foursort(t_list *la, t_list *lb, t_node *tmp);
void	pb_the_smallest(t_list *la, t_list *lb, t_node *tmp);
int		who_is_smallest(t_node *tmp);

// Sort big datas
void	sort_a_and_b(t_list *la, t_list *lb);
t_node	*smallest_sb(t_list *lb);
t_node	*biggest_sb(t_list *lb);
int		position_element(t_list *l, t_node *elmt);
int		best_move(t_list *l);
void	sort_smallest(t_list *lb);
void	sort_biggest(t_list *lb);
void	real_sort_hundred(t_list *la, t_list *lb);
void	its_sorted(t_list *la, t_list *lb);
int		is_number(char *av);
int		numbers(int ac, char **av);
void	ft_duplicate(t_list *la);
void	sort_between(t_list *la, t_list *lb);

// Sort more than 100

int		smallest_median(t_list *la);
int		biggest_median(t_list *la);
int		the_smallest(t_list *la);
int		the_biggest(t_list *la);
void	first_quarter(t_list *la, t_list *lb);
void	second_quarter(t_list *la, t_list *lb);
void	third_quarter(t_list *la, t_list *lb);
void	fourst_quarter(t_list *la, t_list *lb);
void	sort_five_hundred(t_list *la, t_list *lb);
void	free_list(t_list *la);

#endif