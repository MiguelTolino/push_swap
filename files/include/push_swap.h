/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:02:13 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/13 14:22:49 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "../lib/libft/libft.h"

# define MAX_INT "2147483647"
# define MIN_INT "-2147483648"

typedef struct t_stack
{
	int		*stack;
	int		len;
}	t_stack;

void	print(char *command);
int		throw_error(void);
char	**manage_errors(int argc, char **argv);
void	format_arguments(char **argv, t_stack *a, int argc);
void	test(t_stack *a, t_stack *b);
int		length(int *a);
int		sa(t_stack *a);
int		sb(t_stack *b);
int		ss(t_stack *a, t_stack *b);
int		pa(t_stack *a, t_stack *b);
int		pb(t_stack *a, t_stack *b);
int		ra(t_stack *a);
int		rb(t_stack *b);
int		rr(t_stack *a, t_stack *b);
int		rra(t_stack *a);
int		rrb(t_stack *b);
int		rrr(t_stack *a, t_stack *b);
void	perform_algorithm(t_stack *a, t_stack *b);
void	merge(int *array, int len);
void	selection(t_stack *a, t_stack *b);
int		is_ordered(t_stack *a);
void	radix(t_stack *a, t_stack *b);

#endif