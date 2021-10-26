/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:11:20 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/26 12:25:52 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int throw_error(char *str)
{
	write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

void manage_errors(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc < 2)
		throw_error("Number of arguments invalid");
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == '-' && !j)
				j++;
			else
				throw_error("Arguments' values incorrect");
		}
		i++;
	}
}