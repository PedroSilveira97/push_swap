/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:29:24 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/18 13:40:31 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	can_rr(t_node **stack)
{
	return (stack && *stack && (*stack)->next);
}

int	rr_stack(t_node **stack)
{
	t_node	*last;
	t_node	*second_last;

	if (!can_rr(stack))
		return (0);
	second_last = *stack;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

void	rra(t_node **stack)
{
	if (!rr_stack(stack))
		return ;
	ft_printf("rra\n");
}

void	rrb(t_node **stack)
{
	if (!rr_stack(stack))
		return ;
	ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (!can_rr(stack_a) || !can_rr(stack_b))
		return ;
	rr_stack(stack_a);
	rr_stack(stack_b);
	ft_printf("rrr\n");
}
