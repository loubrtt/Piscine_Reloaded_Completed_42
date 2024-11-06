/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:21:24 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 16:14:31 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb > 12)
		return (0);
	i = nb;
	if (nb == 0)
		return (1);
	result = 1;
	if (nb < 0)
		return (0);
	while (nb != 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int main (void)
{
	int i = -6;
	printf("%d", ft_iterative_factorial(i));
}*/
