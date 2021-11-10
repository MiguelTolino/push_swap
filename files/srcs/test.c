/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:21:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/10 17:20:18 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stacks(t_stack *new, char *str)
{
	int i;

	i = 0;
	printf("%s ->[", str);
	while (i < new->len)
	{
		if (i == new->len - 1)
			printf("%i]", new->stack[i]);
		else
			printf("%i ", new->stack[i]);
		i++;
	}
	printf("\n");
}

void	test(t_stack *a, t_stack *b)
{
	print_stacks(a, "A");
	print_stacks(b, "B");
	printf("\n");
}
