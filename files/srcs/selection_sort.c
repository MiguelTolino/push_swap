/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:59:59 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 19:07:05 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void selection(s_stack *a, s_stack *b)
{
	int min;
	int i;

	while (a->len)
	{
		i = 0;
		min = RAND_MAX;
		while (i < a->len)
		{
			if (a->stack[i] < min)
				min = a->stack[i];
			i++;
		}
		while (a->stack[0] != min)
			ra(a);
		pb(a, b);
	}
	while (b->len)
		pa(a, b);
}