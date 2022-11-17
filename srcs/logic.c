/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:50:32 by aabda             #+#    #+#             */
/*   Updated: 2022/11/17 15:02:44 by aabda            ###   ########.fr       */
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
		while (--i >= 0)
			*stack = ft_add_node(*stack, ft_atoi(tab[i], *stack));
		i = -1;
		while (tab[++i])
			free(tab[i]);
		free(tab[i]);
		free(tab);
		ft_error(*stack, NULL, ft_is_double(*stack), ERROR);
	}
}

void	ft_sort(t_data **stack_a, t_data **stack_b)
{
	t_data	*cp_a;
	int		nb_node;

	nb_node = 0;
	cp_a = *stack_a;
	ft_fill_index(stack_a);
	while (cp_a)
	{
		cp_a = cp_a->next;
		nb_node++;
	}
	if (nb_node == 2 && (*stack_a)->value > (*stack_a)->next->value)
		ft_swap("sa\n", stack_a);
	else if (nb_node == 3)
		ft_three_nodes(stack_a);
	else if (nb_node > 3 && nb_node < 6)
		ft_four_and_five_nodes(stack_a, stack_b);
	else if (nb_node > 5)
		ft_radix(stack_a, stack_b);
}

void	ft_logic_four_five(t_data **s_a, t_data **s_b, int pos, int len_s_a)
{
	int	i;

	i = -1;
	if (pos <= len_s_a / 2)
		while (++i < pos)
			ft_rotate("ra\n", s_a);
	else if (pos > len_s_a / 2)
		while (++i < len_s_a - pos)
			ft_reverse_rotate("rra\n", s_a);
	pb(s_a, s_b);
}
