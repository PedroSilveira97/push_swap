/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:56:32 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/18 13:41:39 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	has_two(t_node **stack)
{
	return (stack && *stack && (*stack)->next);
}

int	swap(t_node **stack)
{
	int	temp;

	if (!has_two(stack))
		return (0);
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
	return (1);
}

void	sa(t_node **stack)
{
	if (!swap(stack))
		return ;
	ft_printf("sa\n");
}

void	sb(t_node **stack)
{
	if (!swap(stack))
		return ;
	ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	int	swapped_a;
	int	swapped_b;

	swapped_a = swap(stack_a);
	swapped_b = swap(stack_b);
	if (swapped_a || swapped_b)
		ft_printf("ss\n");
}
