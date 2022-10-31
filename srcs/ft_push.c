/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:10:54 by aabda             #+#    #+#             */
/*   Updated: 2022/10/31 11:54:21 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_data **stack_a, t_data **stack_b)
{
	t_data	*first_a;
	t_data	*first_b;

	if (!stack_b)
		return ;
	first_a = *stack_a;
	first_b = *stack_b;
	*stack_b = (*stack_b)->next;
	first_b->next = *stack_a;
	*stack_a = first_b;
	ft_putstr_fd("[PA]\n", 1);
}

void	pb(t_data **stack_a, t_data **stack_b)
{
	t_data	*first_a;
	t_data	*first_b;

	if (!stack_a)
		return ;
	first_a = *stack_a;
	first_b = *stack_b;
	*stack_a = (*stack_a)->next;
	first_a->next = *stack_b;
	*stack_b = first_a;
	ft_putstr_fd("[PB]\n", 1);
}
