/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:45:45 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/07 16:27:33 by ptavares         ###   ########.fr       */
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
