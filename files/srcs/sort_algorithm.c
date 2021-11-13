/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:03:21 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/10 22:03:10 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_ordered(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->len - 1)
	{
		if (a->stack[i] > a->stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	short_sorting(t_stack *a)
{
	while (!is_ordered(a))
	{
		if (a->stack[0] > a->stack[1] && a->stack[0]
			< a->stack[2] && a->stack[1] < a->stack[2])
			sa(a);
		else if (a->stack[0] < a->stack[1] && a->stack[0]
			> a->stack[2] && a->stack[1] > a->stack[2])
			rra(a);
		else if (a->stack[0] < a->stack[1] && a->stack[0]
			< a->stack[2] && a->stack[1] > a->stack[2])
			rra(a);
		else if (a->stack[0] > a->stack[1] && a->stack[0]
			> a->stack[2] && a->stack[1] < a->stack[2])
			ra(a);
		else if (a->stack[0] > a->stack[1] && a->stack[0]
			> a->stack[2] && a->stack[1] > a->stack[2])
			sa(a);
	}
}

void	middle_sorting(t_stack *a, t_stack *b)
{
	int	i;
	int	n;

	if (is_ordered(a))
		return ;
	while (a->len > 3)
	{
		i = 0;
		n = a->stack[0];
		while (i < a->len - 1)
		{
			if (a->stack[i + 1] < n)
				n = a->stack[i + 1];
			i++;
		}
		while (a->stack[0] != n)
		{
			ra(a);
		}
		pb(a, b);
	}
	short_sorting(a);
	pa(a, b);
	pa(a, b);
}

void	perform_algorithm(t_stack *a, t_stack *b)
{
	if (a->len <= 3)
		short_sorting(a);
	else if (a->len <= 5)
		middle_sorting(a, b);
	else if (a->len <= 100)
		selection(a, b);
	else
		radix(a, b);
}
