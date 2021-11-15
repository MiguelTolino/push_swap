/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:25:40 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/13 14:30:08 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rra(t_stack *a)
{
	int	i;
	int	n;

	if (!a->stack[0])
		return (0);
	i = a->len - 1;
	n = a->stack[a->len - 1];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[0] = n;
	print("rra\n");
	return (1);
}

int	rrb(t_stack *b)
{
	int	i;
	int	n;

	if (!b->stack[0])
		return (0);
	i = b->len - 1;
	n = b->stack[b->len - 1];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[0] = n;
	print("rrb\n");
	return (1);
}

int	rrr(t_stack *a, t_stack *b)
{
	if (!rra(a) && !rrb(b))
		return (0);
	return (1);
}
