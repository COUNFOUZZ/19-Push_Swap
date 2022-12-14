/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:03:56 by aabda             #+#    #+#             */
/*   Updated: 2022/11/23 14:03:22 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, const char **argv)
{
	t_data	*stack_a;
	t_data	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		ft_if_is_two_args(argc, argv, &stack_a);
		ft_sort(&stack_a, &stack_b);
	}
	else
	{
		while (--argc >= 1)
			stack_a = ft_add_node(stack_a, ft_atoi(argv[argc], stack_a));
		ft_error(stack_a, stack_b, ft_is_double(stack_a), ERROR);
		ft_sort(&stack_a, &stack_b);
	}
	ft_free_stack(stack_a, NULL);
	return (0);
}
