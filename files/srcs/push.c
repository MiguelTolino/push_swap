/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:29:53 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/29 12:15:54 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
1º Create a new stack a.len + 1
2º Fill stack with i + 1 values where a[0] == b[0]
3º Free old stack
*/

int pa(s_stack *a, s_stack *b)
{
	int *new_a;
	int i;

	i = 1;
	if (!b->stack[0])
		return (0);
	new_a = (int*)malloc(sizeof(int) * a->len + 1);
	new_a[0] = b->stack[0];
	while (i < a->len)
	{
		new_a[i] = a->stack[i];
		i++;
	}
	i = 0;
	while (i < b->len - 1)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	free(a->stack);
	a->stack = new_a;
	print("pa\n");
	return (1);
}

int pb(s_stack *a, s_stack *b)
{
	int *new_b;
	int i;

	i = 1;
	if (!a->stack[0])
		return (0);
	new_b = (int*)malloc(sizeof(int) * b->len + 1);
	new_b[0] = a->stack[0];
	while (i < b->len)
	{
		new_b[i] = b->stack[i];
		i++;
	}
	i = 0;
	while (i < a->len - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	free(b->stack);
	a->stack = new_b;
	print("pa\n");
	return (1);
}
