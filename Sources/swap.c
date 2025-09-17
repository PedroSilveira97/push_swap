/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:56:32 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/17 20:28:17 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **stack)
{
	int	temp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

/*void sa(t_node **stack)
{
	t_node	*first;
	t_node	*second;
	int		aux;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	second = first->next;
	aux = first->value;
	first->value = second->value;
	second->value = aux;
}*/

/*void sa(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first  = *stack;				// N1
	second = first->next;			// N2
	first->next  = second->next;	// N1 -> N3
	second->next = first;			// N2 -> N1
	*stack = second;
}*/

void	sb(t_node **stack)
{
	int	temp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

/*void sb(t_node **stack)
{
	t_node	*first;
	t_node	*second;
	int		aux;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	second = first->next;
	aux = first->value;
	first->value = second->value;
	second->value = aux;
}*/

/*void sb(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first  = *stack;				// N1
	second = first->next;			// N2
	first->next  = second->next;	// N1 -> N3
	second->next = first;			// N2 -> N1
	*stack = second;
}*/

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
