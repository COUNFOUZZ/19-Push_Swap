/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:34:10 by aabda             #+#    #+#             */
/*   Updated: 2022/10/24 14:53:48 by aabda            ###   ########.fr       */
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
		printf("[%p][%d]\n", node, node->value);	// PRINTF
		node = node->next;
		if (!node)
			printf("[%p]NULL\n", node);				// PRINTF
	}
}

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
