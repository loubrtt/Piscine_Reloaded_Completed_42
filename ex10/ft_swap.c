/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:04:49 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/04 13:14:52 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main (void)
{
	int a = 12;
	int b = 32;

	printf("nb a = %d et nb b %d \n", a, b);
	ft_swap(&a, &b);
	printf("nb a = %d et nb b %d \n", a, b);
}*/
