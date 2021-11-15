/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:08:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/14 23:19:51 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_max_int(char *num, int number)
{
	if ((num[0] != '-' || num[1] != '1') && number == -1)
		throw_error();
	return (0);
}

int	check_min_int(char *num, int number)
{
	if (num[0] != '0' && !number)
		throw_error();
	return (0);
}

void	format_arguments(char **num, t_stack *a, int argc)
{
	int	i;
	int	len;
	int	fix;

	if (argc == 2)
		fix = 0;
	else
		fix = 1;
	len = 0;
	i = fix;
	while (num[i++])
		len++;
	a->stack = (int *)malloc(sizeof(int) * (len));
	a->len = len;
	i = fix;
	while (num[i])
	{
		a->stack[i - fix] = ft_atoi(num[i]);
		check_max_int(num[i], a->stack[i - fix]);
		check_min_int(num[i], a->stack[i - fix]);
		i++;
	}
}
