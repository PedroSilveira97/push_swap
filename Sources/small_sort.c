/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:04:04 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/17 19:14:19 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rr_min_to_top(t_node **stack_a, int pos, int size)
{
	int	i;

	if (pos <= size / 2)
	{
		i = 0;
		while (i < pos)
		{
			ra(stack_a);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < (size - pos))
		{
			rra(stack_a);
			i++;
		}
	}
}

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	sort_three(t_node **stack_a)
{
	int	x;
	int	y;
	int	z;

	x = (*stack_a)->index;
	y = (*stack_a)->next->index;
	z = (*stack_a)->next->next->index;
	if (x < y && y < z)
		return ;
	else if (x > y && y < z && x < z)
		sa(stack_a);
	else if (x > y && y > z)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (x > y && y < z && x > z)
		ra(stack_a);
	else if (x < y && y > z && x < z)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (x < y && y > z && x > z)
		rra(stack_a);
}

void	small_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;
	int	pos;

	size = stack_size(*stack_a);
	pos = pos_of_min(*stack_a, size);
	rr_min_to_top(stack_a, pos, size);
	pb(stack_a, stack_b);
}
