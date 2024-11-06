/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:32:24 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 13:44:36 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;
	int	i;

	i = 0;
	range = max - min;
	tab = malloc(sizeof (int) * range);
	if (tab == NULL)
		return (tab);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main (void)
{
	int min = 8;
	int max = 9;
	int i = 0;
	int *tab;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("[%d]", tab[i]);
		i++;
	}
	free (tab);
}*/
