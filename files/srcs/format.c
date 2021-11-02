/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:08:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 10:40:34 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_max_int(char *num)
{
	if (num[0] != '-' && num[1] != '1' && ft_atoi(num) == -1)
		throw_error("Number is greater than an integer value");
	return (0);
}

int check_min_int(char *num)
{
	if (num[0] != '0' && !ft_atoi(num))
		throw_error("Number is lower than an integer value");
	return (0);
}

void format_arguments(char **argv, s_stack *a)
{
	int i;
	int len;

	len = 0;
	i = 1;
	while (argv[i++])
		len++;
	a->stack = (int *)malloc(sizeof(int) * (len));
	a->len = len;
	i = 1;
	while (argv[i])
	{
		check_max_int(argv[i]);
		check_min_int(argv[i]);
		a->stack[i - 1] = ft_atoi(argv[i]);
		i++;
	}
}