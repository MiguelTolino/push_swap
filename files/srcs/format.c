/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:08:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/01 20:17:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
		a->stack[i - 1] = ft_atoi(argv[i]);
		i++;
	}
}