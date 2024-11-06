/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:15:51 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/04 13:19:35 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main (void)
{
	int a;
	a=6;
	int b;
	b = 2;
	int mod;
	mod = 0;
	int div = 0;
	ft_div_mod(a, b, &div, &mod );
	printf ("div = %d mod = %d \n", div , mod); 
}*/
