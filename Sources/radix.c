/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:45:45 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/24 23:13:18 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pos_of_max(t_node *stack)
{
	int	pos;
	int	best_pos;
	int	best_index;

	pos = 0;
	best_pos = 0;
	best_index = -1;
	while (stack)
	{
		if (stack->index > best_index)
		{
			best_index = stack->index;
			best_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	return (best_pos);
}

void	push_back_desc(t_node **stack_a, t_node **stack_b)
{
	int	pos;
	int	size;

	while (*stack_b)
	{
		pos = pos_of_max(*stack_b);
		size = stack_size(*stack_b);
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				rb(stack_b);
		}
		else
		{
			while (pos++ < size)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
}

void	chunk_sort(t_node **stack_a, t_node **stack_b, int chunk)
{
	int	pushed;

	pushed = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= pushed)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			pushed++;
		}
		else if ((*stack_a)->index <= pushed + chunk)
		{
			pb(stack_a, stack_b);
			pushed++;
		}
		else
			ra(stack_a);
	}
	push_back_desc(stack_a, stack_b);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size <= 5)
		return ;
	if (size <= 100)
		chunk_sort(stack_a, stack_b, 15);
	else
		chunk_sort(stack_a, stack_b, 30);
}
