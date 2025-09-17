/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:48:33 by ptavares          #+#    #+#             */
/*   Updated: 2025/09/17 20:27:27 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	error_exit(t_node **node, char **value)
{
	int	i;

	if (value)
	{
		i = 0;
		while (value[i])
		{
			free(value[i]);
			i++;
		}
		free(value);
	}
	if (node)
		free_stack(node);
	write(2, "Error\n", 6);
	exit(1);
}

static int	duplicate(t_node *node, int value)
{
	while (node)
	{
		if (node->value == value)
			return (1);
		node = node->next;
	}
	return (0);
}

static int	is_atoi(char *token, int *output)
{
	int			sign;
	long long	value;

	sign = 1;
	value = 0;
	while (*token == ' ' || (*token >= 9 && *token <= 13))
		token++;
	if (*token == '+' || *token == '-')
	{
		if (*token == '-')
			sign = -1;
		token++;
	}
	if (!token || !ft_isdigit((unsigned char)*token))
		return (0);
	while (ft_isdigit((unsigned char)*token))
	{
		value = value * 10 + ((*token) - '0');
		token++;
	}
	if (*token != '\0' || ((sign == 1 && value > INT_MAX)
			|| (sign == -1 && value < INT_MAX)))
		return (0);
	*output = (int)(sign * value);
	return (1);
}

static void	parse_argument(char *token, t_node **node)
{
	char	**argument;
	int		i;
	int		value;
	t_node	*new_node;

	argument = ft_split(token, ' ');
	if (!argument || !argument[0])
		error_exit(node, argument);
	i = 0;
	while (argument[i])
	{
		if ((!is_atoi(argument[i], &value)) || duplicate(*node, value))
			error_exit(node, argument);
		new_node = ft_new_node(value);
		if (!new_node)
			error_exit(node, argument);
		append(node, new_node);
		i++;
	}
	free_words(argument);
}

void	appending(int argc, char **argv, t_node **node)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		parse_argument(argv[i], node);
		i++;
	}
}
