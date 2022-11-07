/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:50:32 by aabda             #+#    #+#             */
/*   Updated: 2022/11/07 15:03:21 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_if_is_two_args(int argc, const char **argv, t_data **stack)
{
	int		i;
	char	**tab;

	tab = NULL;
	if (argc == 2)
	{
		i = 0;
		tab = ft_split(argv[1], ' ');
		while (tab[i])
			i++;
		while (tab[--i])
			*stack = ft_add_node(*stack, ft_atoi(tab[i], *stack));
		ft_error(*stack, ft_is_double(*stack), ERROR);
	}
}

void	ft_sort(t_data **stack_a, t_data **stack_b)
{
	t_data	*cp_a;
	int		nb_node;

	nb_node = 0;
	cp_a = *stack_a;
	while (cp_a)
	{
		cp_a = cp_a->next;
		nb_node++;
	}
	if (nb_node == 2 && (*stack_a)->value > (*stack_a)->next->value)
		ft_swap("[SA]\n", stack_a);
	else if (nb_node == 3)
		ft_three_node(stack_a);
	ft_print_two_stack(*stack_a, *stack_b);
}
