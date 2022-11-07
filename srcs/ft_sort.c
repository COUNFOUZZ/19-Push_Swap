/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:15:13 by aabda             #+#    #+#             */
/*   Updated: 2022/11/07 14:17:35 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_three_node(t_data **stack_a)
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
		ft_reverse_rotate("[RRA]\n", stack_a);
		ft_swap("[SA]\n", stack_a);
	}
	else if (f->value > s->value && f->value < t->value && s->value < t->value)
		ft_swap("[SA]\n", stack_a);
	else if (f->value < s->value && f->value > t->value && s->value > t->value)
		ft_reverse_rotate("[RRA]\n", stack_a);
	else if (f->value > s->value && f->value > t->value && s->value < t->value)
		ft_rotate("[RA]\n", stack_a);
	else if (f->value > s->value && f->value > t->value && s->value > t->value)
	{
		ft_rotate("[RA]\n", stack_a);
		ft_swap("[SA]\n", stack_a);
	}
}
