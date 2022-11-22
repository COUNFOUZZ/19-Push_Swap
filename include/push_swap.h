/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:04:13 by aabda             #+#    #+#             */
/*   Updated: 2022/11/22 17:10:25 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define ERROR "Error\n"

typedef struct s_data
{
	int				value;
	int				index;
	struct s_data	*next;
}	t_data;

/*		LIBFT_UTILS.c		*/
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str, t_data *node);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(const char *s, int fd);

/*		NODE.C		*/
t_data	*ft_add_node(t_data *node, int val);
void	ft_fill_index(t_data **stack_a);

/*		FT_CHECK.C		*/
int		ft_is_double(t_data *node);
int		ft_is_sorted(t_data *stack_a);

/*		FT_PUSH.C		*/
void	pa(t_data **stack_a, t_data **stack_b);
void	pb(t_data **stack_a, t_data **stack_b);

/*		FT_SWAP.C		*/
void	ft_swap(const char *s, t_data **stack);
void	ss(t_data **stack_a, t_data **stack_b);

/*		FT_ROTATE.C		*/
void	ft_rotate(const char *s, t_data **stack);
void	rr(t_data **stack_a, t_data **stack_b);

/*		FT_REVERSE_ROTATE.C		*/
void	ft_reverse_rotate(const char *s, t_data **stack);
void	rrr(t_data **stack_a, t_data **stack_b);

/*		FT_SORT.C		*/
void	ft_three_nodes(t_data **stack_a);
void	ft_four_and_five_nodes(t_data **stack_a, t_data **stack_b);
void	ft_radix(t_data **stack_a, t_data **stack_b);

/*		LOGIC.C		*/
void	ft_if_is_two_args(int argc, const char **argv, t_data **stack);
void	ft_sort(t_data **stack_a, t_data **stack_b);
void	ft_logic_four_five(t_data **s_a, t_data **s_b, int pos, int len_s_a);

/*		UTILS.C		*/
void	ft_free_stack(t_data *stack_a, t_data *stack_b);
void	ft_error(t_data *stack_a, t_data *stack_b, int res, const char *error);
int		ft_len_stack(t_data *stack);
int		ft_find_min_index(t_data **stack);
int		ft_find_max_index(t_data **stack);

#endif