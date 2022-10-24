/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:03:56 by aabda             #+#    #+#             */
/*   Updated: 2022/10/24 14:55:32 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, const char **argv)
{
	t_data	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		return (-1);
	while (--argc >= 1)
		stack_a = ft_add_node(stack_a, ft_atoi(argv[argc], stack_a));
	ft_error(stack_a, ft_is_double(stack_a), DOUBLE_ARG);
	ft_print_list(stack_a);
	return (0);
}
