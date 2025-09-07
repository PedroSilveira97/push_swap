/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:39:44 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/07 15:57:10 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf.h"

static void	error_exit(t_node **node);
static int	duplicate(t_node *node, int value);
static int	is_atoi(char *token, int *output);
static void	parse_argument(char *token, t_node **node);
void	appending(int argc, char **argv, t_node **node);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack);
void	rb(t_node **stack);
void	rr(t_node **stack_a, t_node **stack_b);
static t_node	*find_last_node(t_node *head);
t_node	*ft_new_node(int value);
void	push_front(t_node **head, t_node *node);
t_node	*detach_front(t_node **head);
void	append(t_node **head, t_node *node);
int	stack_size(t_node *head);
int	is_sorted(t_node *head);
void	free_stack(t_node **head);
static void	free_words(char **value);

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

#endif
