/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:29:24 by ptavares          #+#    #+#             */
/*   Updated: 2025/08/25 19:23:52 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack)
{
	t_node	*last;
	t_node	*first;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	while (first->next->next)
		first = first->next;
	last = first->next;
	first->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rrb(t_node **stack)
{
	t_node	*last;
	t_node	*first;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = stack;
	while (first->next->next)
		first->next;
	last = first->next;
	first->next = NULL;
	last->next = *stack;
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
