/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:08:41 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/04 11:20:50 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_node *head)
{
	int	n;

	n = 0;
	while(head)
	{
		n++;
		head = head->next;
	}
	return n;
}

int	is_sorted(t_node *head)
{
	while(head && head->next)
	{
		if(head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	free_stack(t_node **head)
{
	t_node	*current;
	t_node	*next;

	if (!head)
		return (NULL);
	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}


