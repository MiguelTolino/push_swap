/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:21:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/29 12:56:41 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_stacks(s_stack *a)
{
	int i;

	i = 0;
	while (i < a->len)
	{
		printf("%i ", a->stack[i++]);
	}
	printf("\n");
}

void test(s_stack *a)
{
	print_stacks(a);
	printf("SA: %i\n", sa(a));
	print_stacks(a);
	printf("RA: %i\n", ra(a));
	print_stacks(a);
	printf("RRA: %i\n", rra(a));
	print_stacks(a);
}
