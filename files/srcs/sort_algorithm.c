/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:03:21 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/03 10:37:21 by mmateo-t         ###   ########.fr       */
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
}