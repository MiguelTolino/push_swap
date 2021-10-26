/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:08:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/26 12:32:21 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int *format_arguments(char **argv)
{
	int *a;
	int i;
	int len;

	len = 0;
	i = 1;
	while (argv[i++])
		len++;
	a = (int*)malloc(sizeof(int) * (len + 1));
	i = 1;
	while (argv[i])
	{
		a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	a[len] = '\0';
	return (a);
}