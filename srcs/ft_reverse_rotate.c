/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:52:20 by aabda             #+#    #+#             */
/*   Updated: 2022/10/30 21:11:37 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_reverse_rotate(const char *s, t_data **stack)
{
	t_data	*first;
	t_data	*b_last;
	t_data	*last;

	b_last = NULL;
	if (stack && *stack)
	{
		first = *stack;
		while ((*stack)->next)
		{
			if (!(*stack)->next->next && !b_last)
				b_last = *stack;
			*stack = (*stack)->next;
		}
		last = *stack;
		*stack = last;
		last->next = first;
		b_last->next = NULL;
		ft_putstr_fd(s, 1);
	}
}

void	do_rr(t_data **stack_a, t_data **stack_b)
{
	ft_reverse_rotate(NULL, &*stack_a);
	ft_reverse_rotate(NULL, &*stack_b);
	ft_putstr_fd("[RRR]\n", 1);
}