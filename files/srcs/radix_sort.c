/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:13:05 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/10 17:58:44 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO Radix Sort

#include "../include/push_swap.h"

// 9 3 5 1 2 6 7

t_stack change_numbers(t_stack *a)
{
	t_stack new;
	int i;
	int j;
	int num;
	int index;
	int prev;

	i = 0;
	num = __INT32_MAX__ * -1;
	prev = __INT32_MAX__ * -1;
	new.len = a->len;
	new.stack = (int *)malloc(sizeof(int) * new.len);
	while (i < a->len)
	{
		j = 0;
		num = __INT32_MAX__;
		while (j < a->len)
		{
			if (a->stack[j] < num && a->stack[j] > prev)
			{
				num = a->stack[j];
				index = j;
			}
			j++;
		}
		new.stack[index] = i + 1;
		prev = num;
		i++;
	}
	return (new);
}

void radix(t_stack *a, t_stack *b)
{
	t_stack new;
	int size;
	int max_num;
	int max_bits;
	int i;
	int j;
	
	i = 0;
	new = change_numbers(a);
	size = new.len;
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (i < max_bits + 1)
	{
		j = 0;
		while (j < size)
		{
			if (((new.stack[0] >> i) & 1) == 1)
				ra(&new);
			else
				pb(&new, b);
			j++;
		}
		while (b->len)
			pa(&new, b);
		i++;
	}
}