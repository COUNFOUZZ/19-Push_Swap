/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:14:22 by aabda             #+#    #+#             */
/*   Updated: 2022/10/24 18:34:27 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(t_data *node, int res, const char *error)
{
	t_data	*tmp;

	if (res < 0)
	{
		if (node)
		{
			while (node)
			{
				tmp = node;
				free(node);
				node = tmp->next;
			}
		}
		write(2, error, ft_strlen(error));
		exit(EXIT_FAILURE);
	}
}
