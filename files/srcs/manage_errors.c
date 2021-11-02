/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:11:20 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 12:55:22 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int throw_error(char *str)
{
	write(3, str, ft_strlen(str));
	write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

int repeated(char **argv, int i)
{
	int j;
	int len1;
	int len2;

	len1 = ft_strlen(argv[i]);
	j = i - 1;
	while (j > 1)
	{
		len2 = ft_strlen(argv[j]);
		if (!ft_strncmp(argv[i], argv[j], len1) && len1 == len2)
			return (1);
		j--;
	}
	return (0);
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
		if (repeated(argv, i))
			throw_error("Elements repeated");
		i++;
	}
}