/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:09:46 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/17 20:27:35 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	assign_indices(t_node *stack_a)
{
	t_node	*i;
	t_node	*j;
	int		rank;

	i = stack_a;
	while (i)
	{
		rank = 0;
		j = stack_a;
		while (j)
		{
			if (j->value < i->value)
				rank++;
			j = j->next;
		}
		i->index = rank;
		i = i->next;
	}
}

int	pos_of_min(t_node *stack_a, int size)
{
	int		pos;
	int		best_pos;
	int		best_index;
	t_node	*current;

	current = stack_a;
	pos = 0;
	best_pos = 0;
	best_index = current->index;
	while (pos < size && current)
	{
		if (current->index < best_index)
		{
			best_index = current->index;
			best_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (best_pos);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	appending(argc, argv, &stack_a);
	if (!stack_a)
		return (0);
	assign_indices(stack_a);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	dispatch(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
