/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabda <aabda@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:04:13 by aabda             #+#    #+#             */
/*   Updated: 2022/11/09 02:01:56 by aabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>			//	Need to be delete !!!

# define BLACK "\x1b[30m"	//	Need to be delete !!!
# define RED "\x1b[31m"		//	Need to be delete !!!
# define GREEN "\x1b[32m"	//	Need to be delete !!!
# define YELLOW "\x1b[33m"	//	Need to be delete !!!
# define BLUE "\x1b[34m"	//	Need to be delete !!!
# define PURPLE "\x1b[35m"	//	Need to be delete !!!
# define CYAN "\x1b[36m"	//	Need to be delete !!!
# define WHITE "\x1b[37m"	//	Need to be delete !!!
# define NORMAL "\x1b[m"	//	Need to be delete !!!

# define ERR_ARG "Invalide number of argument !\n"
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
void	ft_print_list(t_data *node);							// Some printf here (need to be delete)
void	ft_print_two_stack(t_data *stack_a, t_data *stack_b);	// Some printf here (need to be delete)

/*		FT_CHECK.C		*/
int		ft_is_double(t_data *node);
int		ft_is_sorted(t_data **stack_a);

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
void	ft_three_node(t_data **stack_a);

/*		LOGIC.C		*/
void	ft_if_is_two_args(int argc, const char **argv, t_data **stack);
void	ft_sort(t_data **stack_a, t_data **stack_b);

/*		UTILS.C		*/
void	ft_error(t_data *node, int res, const char *error);

#endif