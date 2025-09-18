/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:39:44 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/18 14:00:55 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

void	dispatch(t_node **stack_a, t_node **stack_b);
int		push_stack(t_node **dest, t_node **source);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	radix_sort(t_node **stack_a, t_node **stack_b);
int		can_rr(t_node **stack);
int		rr_stack(t_node **stack);
void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **stack_a, t_node **stack_b);
int		can_rotate(t_node **stack);
int		rotate_stack(t_node **stack);
void	ra(t_node **stack);
void	rb(t_node **stack);
void	rr(t_node **stack_a, t_node **stack_b);
void	sort_two(t_node **stack_a);
void	sort_three(t_node **stack_a);
void	small_sort(t_node **stack_a, t_node **stack_b);
t_node	*ft_new_node(int value);
void	push_front(t_node **head, t_node *node);
t_node	*detach_front(t_node **head);
void	append(t_node **head, t_node *node);
int		stack_size(t_node *head);
int		is_sorted(t_node *head);
void	free_stack(t_node **head);
void	free_words(char **value);
int		has_two(t_node **stack);
int		swap(t_node **stack);
void	sa(t_node **stack);
void	sb(t_node **stack);
void	ss(t_node **stack_a, t_node **stack_b);
void	appending(int argc, char **argv, t_node **node);
int		pos_of_min(t_node *stack_a, int size);

#endif
