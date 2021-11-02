/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:03:21 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 19:06:57 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int is_ordered(s_stack *a)
{
	int i;

	i = 0;
	while (i < a->len - 1)
	{
		if (a->stack[i] > a->stack [i + 1])
			return(0);
		i++;
	}
	return (1);
}

void perform_algorithm(s_stack *a, s_stack *b)
{
	selection(a, b);
/* 	while (!is_ordered(a))
	{
		if (a->stack[0] > a->stack[1] && a->stack[0] < a->stack[2] && a->stack[1] < a->stack[2]) // 2 1 3
			sa(a);
		else if (a->stack[0] < a->stack[1] && a->stack[0] > a->stack[2] && a->stack[1] > a->stack[2]) // 2 3 1
			rra(a);
		else if (a->stack[0] < a->stack[1] && a->stack[0] < a->stack[2] && a->stack[1] > a->stack[2]) // 1 3 2
			rra(a);
		else if (a->stack[0] > a->stack[1] && a->stack[0] > a->stack[2] && a->stack[1] < a->stack[2]) // 3 1 2
			ra(a);
		else if (a->stack[0] > a->stack[1] && a->stack[0] > a->stack[2] && a->stack[1] > a->stack[2]) // 3 2 1
			sa(a);
	} */
}