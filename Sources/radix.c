/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:45:45 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/17 19:06:01 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	highest_set_bit_index(int n)
{
	int	bit;

	bit = 0;
	while ((n >> bit) != 0)
		bit++;
	if (bit == 0)
		return (0);
	return (bit -1);
}

static int	max_rank(t_node	*head)
{
	int	max;

	if (!head)
		return (0);
	max = head->index;
	head = head->next;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	return (max);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	maxbit;
	int	bit;
	int	size;
	int	i;

	max = max_rank(*stack_a);
	maxbit = highest_set_bit_index(max);
	size = stack_size(*stack_a);
	bit = 0;
	while (bit <= maxbit)
	{
		i = 0;
		while (i < size)
		{
			if (((*stack_a)->index >> bit & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			i++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		bit++;
	}
}
