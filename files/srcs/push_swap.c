/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:01:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/26 13:24:24 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
- push_swap.h
- compiling makefile


PROGRAM
-------
- parse arguments to int
- build operations
- manage errors







*/

int main(int argc, char **argv)
{
	int *a;
	int *b;

	manage_errors(argc, argv);

	a = format_arguments(argv);
	b = (int*)malloc(sizeof(int) * length(a));
	test(a, length(a));
	return (0);
}
