/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:14:22 by aabda             #+#    #+#             */
/*   Updated: 2022/11/17 15:07:24 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_stack(t_data *stack_a, t_data *stack_b)
{
	t_data	*tmp;

	while (stack_a)
	{
		tmp = stack_a;
		stack_a = tmp->next;
		free(tmp);
	}
	while (stack_b)
	{
		tmp = stack_b;
		stack_b = tmp->next;
		free(tmp);
	}
}

void	ft_error(t_data *stack_a, t_data *stack_b, int res, const char *error)
{
	if (res < 0)
	{
		ft_free_stack(stack_a, stack_b);
		write(2, error, ft_strlen(error));
		exit(EXIT_FAILURE);
	}
}

int	ft_len_stack(t_data *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ft_find_min_index(t_data **stack)
{
	t_data	*first;
	int		count;

	first = *stack;
	count = 0;
	while (*stack)
	{
		if ((*stack)->index == 0)
			break ;
		count++;
		*stack = (*stack)->next;
	}
	*stack = first;
	return (count);
}

int	ft_find_max_index(t_data **stack)
{
	t_data	*first;
	int		max_index;
	int		count;

	first = *stack;
	max_index = ft_len_stack(*stack);
	count = 0;
	while (*stack)
	{
		if ((*stack)->index == max_index)
			break ;
		count++;
		*stack = (*stack)->next;
	}
	*stack = first;
	return (count);
}
