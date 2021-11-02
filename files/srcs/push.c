/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:29:53 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 11:21:12 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int push(s_stack *a, s_stack *b)
{
	s_stack new_a;
	s_stack new_b;
	int i;

	if (!a->stack[0])
		return (0);
	new_b.stack = (int *)malloc(sizeof(int) * (b->len + 1));
	new_b.stack[0] = a->stack[0];
	new_b.len = b->len + 1;
	new_a.len = a->len - 1;
	new_a.stack = (int *)malloc(sizeof(int) * (new_a.len));
	i = 0;
	while (i < new_a.len)
	{
		new_a.stack[i] = a->stack[i + 1];
		i++;
	}
	i = 1;
	while (i < new_b.len)
	{
		new_b.stack[i] = b->stack[i - 1];
		i++;
	}
	free(a->stack);
	free(b->stack);
	*a = new_a;
	*b = new_b;
	return (1);
}

int pa(s_stack *a, s_stack *b)
{
	if(push(b, a))
		print("pa\n");
	return (1);
}

int pb(s_stack *a, s_stack *b)
{
	int done;

	if (done = push(a, b))
		print("pb\n");
	return(done);
}
