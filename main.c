/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:57:33 by ptavares          #+#    #+#             */
/*   Updated: 2025/08/25 19:26:12 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	push(&a, 3);
	push(&a, 2);
	push(&a, 1);
	push(&b, 3);
	push(&b, 2);
	push(&b, 1);
	ra(&a);
	while (a)
	{
		printf("%d ", a->value);
		a = a->next;
	}
	printf("\n");
	rb(&b);
	while (b)
	{
		printf("%d ", b->value);
		b = b->next;
	}
	printf("\n");
	return (0);
}
