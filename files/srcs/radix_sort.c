/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:13:05 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/10 15:00:43 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO Radix Sort

#include "../include/push_swap.h"

// 9 3 5 1 2 6 7

t_stack	change_numbers(t_stack *a)
{
	t_stack	new;
	int	i;
	int	j;
	int	num;
	int	index;
	int	prev;

	i = 0;
	num = __INT32_MAX__ * -1;
	prev = __INT32_MAX__ * -1;
	new.stack = (int *)malloc(sizeof(int) * a->len);
	new.len = a->len;
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
		new.stack[index] = i;
		prev = num;
		i++;
	}
	return (new);
}

void radix(t_stack *a, t_stack *b)
{
	t_stack sorted;
	int i;
	int j;
	int max_bits;
	int len;
	int max_num;
	
	i = 0;
	max_bits = 0;
	len = a->len;
	max_num = len - 1;
	sorted = change_numbers(a);
	printf("LEN:%i\n", len);
	printf("SORTED: ");
	while (i < sorted.len)
	{
		printf("%i", sorted.stack[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while ((max_num >> max_bits))
		++max_bits;
	printf("MAXBITS:%i\n", max_bits);
	while (i < max_bits)
	{
		j = 0;
		while (j < len)
		{
			if (((sorted.stack[j] >> i)&1) == 1)
				ra(&sorted);
			else
				pb(&sorted, b);
			j++;
		}
		while (b->len)
			pa(&sorted, b);
		i++;
	}
	test(&sorted, b);
	free(sorted.stack);
}
