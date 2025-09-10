/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:58:05 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/10 16:04:19 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dispatch(t_node *stack_a, t_node *stack_b)
{
	int	n;

	if (is_sorted(stack_a))
		return ;
	n = stack_size(stack_a);
	if (n == 2)
		sort_two(&stack_a);
	else if (n == 3)
		sort_three(&stack_a);
	else if (n == 4 || n == 5)
		small_sort(stack_a, stack_b);
	else
		radix_sort(&stack_a, &stack_b);
}
