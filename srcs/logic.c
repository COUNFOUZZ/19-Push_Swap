/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:50:32 by aabda             #+#    #+#             */
/*   Updated: 2022/11/02 15:14:53 by aabda            ###   ########.fr       */
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
