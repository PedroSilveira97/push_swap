/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:51:39 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/18 14:18:47 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	can_rotate(t_node **stack)
{
	return (stack && *stack && (*stack)->next);
}

int	rotate_stack(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!can_rotate(stack))
		return (0);
	first = *stack;
	*stack = first->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	return (1);
}

void	ra(t_node **stack)
{
	if (rotate_stack(stack))
		ft_printf("ra\n");
}

void	rb(t_node **stack)
{
	if (rotate_stack(stack))
		ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	int	rotated_a;
	int	rotated_b;

	rotated_a = rotate_stack(stack_a);
	rotated_b = rotate_stack(stack_b);
	if (rotated_a && rotated_b)
		ft_printf("rr\n");
}
