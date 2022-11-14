/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:34:10 by aabda             #+#    #+#             */
/*   Updated: 2022/11/14 12:08:09 by aabda            ###   ########.fr       */
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

void	ft_fill_index(t_data **stack_a)
{
	t_data	*first;
	t_data	*cp_a;
	int		i;

	first = *stack_a;
	cp_a = *stack_a;
	while (*stack_a)
	{
		cp_a = first;
		i = 0;
		while (cp_a)
		{
			if ((*stack_a)->value > cp_a->value)
				i++;
			if ((*stack_a)->index != i)
				(*stack_a)->index = i;
			if (!cp_a->next)
				break ;
			cp_a = cp_a->next;
		}
		*stack_a = (*stack_a)->next;
	}
	*stack_a = first;
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
	printf(GREEN "[STACK_A]\n");
	while (stack_a)
	{
		printf("[%p][%d][%d]\n", stack_a, stack_a->value, stack_a->index);
		stack_a = stack_a->next;
	}
	if (!stack_a)
		printf(RED "[%p]NULL\n" NORMAL, stack_a);
	printf(YELLOW "[STACK_B]\n");
	while (stack_b)
	{
		printf("[%p][%d]\n", stack_b, stack_b->value);
		stack_b = stack_b->next;
	}
	if (!stack_b)
		printf(RED "[%p]NULL\n" NORMAL, stack_b);
}
