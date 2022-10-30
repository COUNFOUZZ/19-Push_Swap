/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:04:13 by aabda             #+#    #+#             */
/*   Updated: 2022/10/30 20:41:45 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>	//	A DELETE

# define ERR_ARG "Invalide number of argument !\n"
# define ERROR "Error\n"

typedef struct s_data
{
	int				value;
	struct s_data	*next;
}	t_data;

/*		LIBFT		*/
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str, t_data *node);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(const char *s, int fd);

/*		NODE.C		*/
t_data	*ft_add_node(t_data *node, int val);
void	ft_print_list(t_data *node);
int		ft_is_double(t_data *node);

/*		FT_SWAP.C		*/
void	ft_swap(const char *s, t_data **stack);
void	do_ss(t_data **stack_a, t_data **stack_b);

/*		FT_ROTATE.C		*/
void	ft_rotate(const char *s, t_data **stack);
void	do_rr(t_data **stack_a, t_data **stack_b);

/*		LOGIC.C		*/
void	ft_if_is_two_args(int argc, const char **argv, t_data *stack);

/*		UTILS.C		*/
void	ft_error(t_data *node, int res, const char *error);

#endif