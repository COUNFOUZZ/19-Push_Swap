/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:33:16 by aabda             #+#    #+#             */
/*   Updated: 2022/10/30 23:15:29 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate(const char *s, t_data **stack)
{
	t_data	*first;
	t_data	*second;
	t_data	*last;

	last = NULL;
	if (stack && *stack)
	{
		first = *stack;
		second = first->next;
		while ((*stack)->next)
			*stack = (*stack)->next;
		last = *stack;
		last->next = first;
		*stack = second;
		first->next = NULL;
		ft_putstr_fd(s, 1);
	}
}

void	rr(t_data **stack_a, t_data **stack_b)
{
	ft_rotate(NULL, &*stack_a);
	ft_rotate(NULL, &*stack_b);
	ft_putstr_fd("[RR]\n", 1);
}
