/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:02:13 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/01 19:57:41 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../lib/libft/libft.h"

#define MAX_INT "2147483647"
#define MIN_INT "-2147483648"

typedef struct s_stack
{
	int* stack;
	int len;
} s_stack;


void print(char *command);
void manage_errors(int argc, char **argv);
void format_arguments(char **argv, s_stack *a);
void test(s_stack *a);
int length(int *a);
int sa(s_stack *a);
int sb(s_stack *b);
int ss(s_stack *a, s_stack *b);
int pa(s_stack *a, s_stack *b);
int pb(s_stack *a, s_stack *b);
int ra(s_stack *a);
int rb(s_stack *b);
int rr(s_stack *a, s_stack *b);
int rra(s_stack *a);
int rrb(s_stack *b);
int rrr(s_stack *a, s_stack *b);



#endif