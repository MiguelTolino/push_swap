/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:01:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/03 10:15:38 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void init_b(s_stack *b)
{
	b->len = 0;
	b->stack = NULL;
}

int main(int argc, char **argv)
{
	s_stack a;
	s_stack b;

	manage_errors(argc, argv);
	format_arguments(argv, &a);
	init_b(&b);
	perform_algorithm(&a, &b);
	//test(&a, &b);
	//merge(a.stack, a.len);
 	free(a.stack);
	free(b.stack);
	return (0);
}
