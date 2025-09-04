/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:48:33 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/04 09:04:15 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_input(const char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	if (*s == '-' || *s == '+')
		s++;
	if (*s == '\0')
		return (0);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

long	ft_atol(char *s)
{
	long	sign;
	long	value;

	sign = 1;
	value = 0;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = sign * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		value = value * 10 + (*s - '0');
		s++;
	}
	return (value * sign);
}
