/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:11:20 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/08 22:33:17 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	throw_error(char *str)
{
	write(3, str, ft_strlen(str));
	write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

int	repeated(char **num, int i, int fix)
{
	int	j;
	int	len1;
	int	len2;

	len1 = ft_strlen(num[i]);
	j = i - 1;
	while (j >= fix)
	{
		len2 = ft_strlen(num[j]);
		if (!ft_strncmp(num[i], num[j], len1) && len1 == len2)
			return (1);
		j--;
	}
	return (0);
}

char	**manage_errors(int argc, char **argv)
{
	int		i;
	int		j;
	char	**num;
	int		fix;

	i = 1;
	fix = 1;
	if (argc < 2)
		throw_error("Number of arguments invalid");
	else if (argc == 2)
	{
		num = ft_split(argv[1], ' ');
		i = 0;
		fix = 0;
	}
	else
		num = argv;
	while (num[i])
	{
		j = 0;
		while (num[i][j])
		{
			if (ft_isdigit(num[i][j]) || num[i][j] == '-' && !j)
				j++;
			else
				throw_error("Arguments' values incorrect");
		}
		if (repeated(num, i, fix))
			throw_error("Elements repeated");
		i++;
	}
	return (num);
}
