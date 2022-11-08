/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:34:10 by aabda             #+#    #+#             */
/*   Updated: 2022/11/08 13:32:26 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_data	*ft_add_node(t_data *node, int val)
{
	t_data	*tmp;

	tmp = malloc(sizeof(t_data));
	if (tmp)
	{
		tmp->value = val;
		tmp->next = node;
	}
	return (tmp);
}

void	ft_print_list(t_data *node)
{
	while (node)
	{
		printf("[%p][%d]\n", node, node->value);
		node = node->next;
		if (!node)
			printf("[%p]NULL\n", node);
	}
}

void	ft_print_two_stack(t_data *stack_a, t_data *stack_b)
{
	printf("[STACK_A]\n");
	while (stack_a)
	{
		printf("[%p][%d]\n", stack_a, stack_a->value);
		stack_a = stack_a->next;
	}
	if (!stack_a)
		printf("[%p]NULL\n", stack_a);
	printf("[STACK_B]\n");
	while (stack_b)
	{
		printf("[%p][%d]\n", stack_b, stack_b->value);
		stack_b = stack_b->next;
	}
	if (!stack_b)
		printf("[%p]NULL\n", stack_b);
}
		printf(RED "[%p]NULL\n" NORMAL, stack_b);
}
