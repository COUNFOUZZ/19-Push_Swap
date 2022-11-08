/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:08 by aabda             #+#    #+#             */
/*   Updated: 2022/11/08 13:32:47 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_double(t_data *node)
{
	t_data	*tmp;

	if (node)
	{
		while (node->next)
		{
			tmp = node->next;
			while (tmp)
			{
				if (node->value == tmp->value)
					return (-1);
				tmp = tmp->next;
			}
			node = node->next;
		}
	}
	return (0);
}

int	ft_is_sorted(t_data **stack_a)
{
	t_data	*tmp;

	if (*stack_a)
	{
		while ((*stack_a)->next)
		{
			tmp = (*stack_a)->next;
			while (tmp)
			{
				if ((*stack_a)->value > tmp->value)
					return (-1);
				tmp = tmp->next;
			}
			*stack_a = (*stack_a)->next;
		}
	}
	return (0);
}
