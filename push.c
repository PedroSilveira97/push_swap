/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:27:23 by ptavares          #+#    #+#             */
/*   Updated: 2025/08/25 19:41:08 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*new_node;

	if (!stack_b || !*stack_b)
		return ;
	new_node = *stack_b;
	*stack_b = (*stack_b)->next;
	new_node->next = *stack_a;
	*stack_a = new_node;
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*new_node;

	if (!stack_a || !*stack_a)
		return ;
	new_node = *stack_a;
	*stack_a = (*stack_a)->next;
	new_node->next = *stack_b;
	*stack_b = new_node;
}
