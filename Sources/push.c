/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:27:23 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/18 12:45:25 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push_stack(t_node **dest, t_node **source)
{
	t_node	*new_node;

	if (!dest || !source || !*source)
		return (0);
	new_node = *source;
	*source = (*source)->next;
	new_node->next = *dest;
	*dest = new_node;
	return (1);
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (push_stack(stack_a, stack_b))
		ft_printf("pa\n");
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (push_stack(stack_a, stack_b))
		ft_printf("pb\n");
}
