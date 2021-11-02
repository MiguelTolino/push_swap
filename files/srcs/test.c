/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:21:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 11:20:07 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_stacks(s_stack *a)
{
	int i;

	i = 0;
	printf("S -> ");
	while (i < a->len)
	{
		printf("%i ", a->stack[i++]);
	}
	printf("\n");
}

void test(s_stack *a, s_stack *b)
{
	printf("PBN:%i\n", pb(a, b));
	printf("PBN:%i\n", pb(a, b));
	printf("PBN:%i\n", pb(a, b));
	printf("PaN:%i\n", pa(a, b));
	printf("PaN:%i\n", pa(a, b));
	print_stacks(a);
	printf("\n");
	print_stacks(b);
}
