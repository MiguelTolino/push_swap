/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:29:53 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/10 20:36:56 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rebuild_stack(t_stack *new_a, t_stack *new_b, t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < new_a->len)
	{
		new_a->stack[i] = a->stack[i + 1];
		i++;
	}
	i = 1;
	while (i < new_b->len)
	{
		new_b->stack[i] = b->stack[i - 1];
		i++;
	}
}

int	push(t_stack *a, t_stack *b)
{
	t_stack	new_a;
	t_stack	new_b;

	if (!a->stack[0])
		return (0);
	new_b.stack = (int *)malloc(sizeof(int) * (b->len + 1));
	new_b.stack[0] = a->stack[0];
	new_b.len = b->len + 1;
	new_a.len = a->len - 1;
	new_a.stack = (int *)malloc(sizeof(int) * (new_a.len));
	rebuild_stack(&new_a, &new_b, a, b);
	free(a->stack);
	free(b->stack);
	*a = new_a;
	*b = new_b;
	return (1);
}

int	pa(t_stack *a, t_stack *b)
{
	int	done;

	done = push(b, a);
	if (done)
		print("pa\n");
	return (done);
}

int	pb(t_stack *a, t_stack *b)
{
	int	done;

	done = push(a, b);
	if (done)
		print("pb\n");
	return (done);
}
