/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:03:15 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/02 19:07:29 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//FIXME

void merge(int *array, int len)
{
	int media;
	int resto;
	int *p1;
	int *p2;
	int i;

	if (len < 2)
		return;
	media = len / 2;
	if (len % 2 == 0)
		resto = media;
	else
		resto = media + 1;
	p1 = (int*)malloc(sizeof(int) * media);
	p2 = (int*)malloc(sizeof(int) * resto);
	i=0;
	while (i < media)
	{
		p1[i] = array[i];
		i++;
	}
	while (i < len)
	{
		p2[i - media] = array[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i < media)
			printf("S1[%i]\t", p1[i]);
		else
			printf("S2[%i]\t", p2[i - media]);
		i++;
	}
	printf("\n");
	merge(p1, media);
	merge(p2, resto);



}