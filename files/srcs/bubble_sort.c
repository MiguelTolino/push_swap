/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:17:21 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/05 18:01:49 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// 5 1 2 8 7 4

void bubble(s_stack *a, s_stack *b)
{
	int num;

	num = a->stack[0];
	/* 	printf("S0:%i\n", a->stack[0]);
		if (a->stack[i] > a->stack[i + 1])
			sa(a);
		ra(a); */
	while (!is_ordered(a))
	{

		if (a->stack[0] > a->stack[1])
			sa(a);
		if (a->stack[a->len] == num)
		{
			pb(a, b);
			num = a->stack[0];
		}
		ra(a);
		// print_stacks(a);
	}
	while (b->len)
	{
		pa(a, b);
	}

}