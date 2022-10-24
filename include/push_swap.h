/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:04:13 by aabda             #+#    #+#             */
/*   Updated: 2022/10/24 16:07:15 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
#include <stdio.h>


# define ERR_ARG "Invalide number of argument !\n"
# define ERROR "Error\n"

typedef struct s_data
{
	int				value;
	struct s_data	*next;
}	t_data;

t_data	*ft_add_node(t_data *node, int val);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str, t_data *node);
int		ft_is_double(t_data *node);
void	ft_error(t_data *node, int res, const char *error);
void	ft_print_list(t_data *node);

#endif