/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:14:22 by aabda             #+#    #+#             */
/*   Updated: 2022/10/24 16:13:05 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

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

int	ft_atoi(const char *str, t_data	*node)
{
	size_t		i;
	int			sign;
	long int	result;

	if (!str || *str < '0' || *str > '9')
		ft_error(node, -1, ERROR);
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result * sign < INT_MIN || result * sign > INT_MAX)
			ft_error(node, -1, ERROR);
	}
	return (result * sign);
}
