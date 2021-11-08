/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:08:58 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/08 22:40:37 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sa(s_stack *a)
{
	int	aux;

	if (a->len <= 1 || !*a->stack)
		return (0);
	aux = a->stack[0];
	a->stack[0] = a->stack[1];
	a->stack[1] = aux;
	print("sa\n");
	return (1);
}

int	sb(s_stack *b)
{
	int	aux;

	if (b->len <= 1 || !*b->stack)
		return (0);
	aux = b->stack[0];
	b->stack[0] = b->stack[1];
	b->stack[1] = aux;
	print("sb\n");
	return (1);
}

int	ss(s_stack *a, s_stack *b)
{
	if (sa(a) || sb(b))
		print("ss\n");
	return (1);
}
