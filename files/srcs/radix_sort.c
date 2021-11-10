/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:13:05 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/10 20:49:04 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO Radix Sort

#include "../include/push_swap.h"

void	change_position(t_stack *a, t_stack *new)
{
	int	i;
	int	j;
	int	num;
	int	prev;
	int	index;

	i = 0;
	prev = __INT32_MAX__ * -1;
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
		new->stack[index] = i + 1;
		prev = num;
		i++;
	}
}

t_stack	change_numbers(t_stack *a)
{
	t_stack	new;

	new.len = a->len;
	new.stack = (int *)malloc(sizeof(int) * new.len);
	change_position(a, &new);
	return (new);
}

void	calc(t_stack *a, t_stack *b, t_stack *new, int max_bits)
{
	int		i;
	int		j;

	i = 0;
	while (i < max_bits + 1)
	{
		j = 0;
		while (j < a->len)
		{
			if (((new->stack[0] >> i) & 1) == 1)
				ra(new);
			else
				pb(new, b);
			j++;
		}
		while (b->len)
			pa(new, b);
		i++;
	}
}

void	radix(t_stack *a, t_stack *b)
{
	t_stack	new;
	int		max_bits;

	new = change_numbers(a);
	max_bits = 0;
	while (((new.len - 1) >> max_bits) != 0)
		++max_bits;
	calc(a, b, &new, max_bits);
}
