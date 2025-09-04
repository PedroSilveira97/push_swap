/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:32:31 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/04 11:08:18 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*find_last_node(t_node *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

t_node	*new_node(int value)
{
	t_node	*n;

	n = (t_node *)malloc(sizeof(*n));
	if (!n)
		return (NULL);
	n->value = value;
	n->index = -1;
	n->next = NULL;
	return (n);
}

void	push_front(t_node **head, t_node *node)
{
	if (!head || !node)
		return;
	node->next = *head;
	*head = node;
}

t_node	*detach_front(t_node **head)
{
	t_node	*n;
	if (!head || !*head)
		return (NULL);
	n = *head;
	*head = (*head)->next;
	n->next = NULL;
	return (n);
}

void	append(t_node **head, t_node *node)
{
	t_node	*last;

	if (!head || !node)
		return;
	node->next = NULL;
	if(!*head)
	{
		*head = node;
		return;
	}
	last = find_last_node(*head);
	last->next = node;
}
