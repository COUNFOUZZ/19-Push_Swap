/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:34:10 by aabda             #+#    #+#             */
/*   Updated: 2022/11/22 17:10:15 by aabda            ###   ########.fr       */
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
