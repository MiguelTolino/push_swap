/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:01:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/29 12:50:02 by mmateo-t         ###   ########.fr       */
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
	s_stack a;
	s_stack b;

	manage_errors(argc, argv);
	format_arguments(argv, &a);
	test(&a);
	return (0);
}
