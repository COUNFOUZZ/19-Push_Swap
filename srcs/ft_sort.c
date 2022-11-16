/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:15:13 by aabda             #+#    #+#             */
/*   Updated: 2022/11/16 16:41:10 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_three_nodes(t_data **stack_a)
{
	t_data	*f;
	t_data	*s;
	t_data	*t;

	f = *stack_a;
	s = f->next;
	t = s->next;
	if (f->value < s->value && s->value < t->value && s->value < t->value)
		return ;
	else if (f->value < s->value && f->value < t->value && s->value > t->value)
	{
		ft_reverse_rotate("rra\n", stack_a);
		ft_swap("sa\n", stack_a);
	}
	else if (f->value > s->value && f->value < t->value && s->value < t->value)
		ft_swap("sa\n", stack_a);
	else if (f->value < s->value && f->value > t->value && s->value > t->value)
		ft_reverse_rotate("rra\n", stack_a);
	else if (f->value > s->value && f->value > t->value && s->value < t->value)
		ft_rotate("ra\n", stack_a);
	else if (f->value > s->value && f->value > t->value && s->value > t->value)
	{
		ft_rotate("ra\n", stack_a);
		ft_swap("sa\n", stack_a);
	}
}

void	ft_radix(t_data **stack_a, t_data **stack_b)
{
	t_data	*num;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = ft_len_stack(*stack_a);
	max_bits = 0;
	while ((len - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			num = *stack_a;
			if (((num->index >> i) & 1) == 1)
				ft_rotate("ra\n", stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (*stack_b)
			pa(stack_a, stack_b);
	}
}
