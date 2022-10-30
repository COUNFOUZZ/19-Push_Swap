/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:16:35 by aabda             #+#    #+#             */
/*   Updated: 2022/10/30 23:17:00 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(const char *s, t_data **stack)
{
	t_data	*first;
	t_data	*second;
	t_data	*third;

	if (stack && *stack && (*stack)->next)
	{
		first = *stack;
		second = first->next;
		*stack = second;
		if (second->next)
			third = second->next;
		else
			third = NULL;
		first->next = third;
		second->next = first;
		ft_putstr_fd(s, 1);
	}
}

void	ss(t_data **stack_a, t_data **stack_b)
{
	ft_swap(NULL, &*stack_a);
	ft_swap(NULL, &*stack_b);
	ft_putstr_fd("[SS]\n", 1);
}
