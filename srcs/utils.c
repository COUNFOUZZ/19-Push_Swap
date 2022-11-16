/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:14:22 by aabda             #+#    #+#             */
/*   Updated: 2022/11/14 16:55:06 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_stack(t_data *stack_a, t_data *stack_b)
{
	t_data	*tmp;

	while (stack_a)
	{
		tmp = stack_a;
		free(stack_a);
		stack_a = tmp->next;
	}
	while (stack_b)
	{
		tmp = stack_b;
		free(stack_b);
		stack_b = tmp->next;
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
