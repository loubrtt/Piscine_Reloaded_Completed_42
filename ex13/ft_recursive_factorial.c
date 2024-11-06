/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:50:07 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 16:15:11 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main (void)
// {
//     int i = 6;
//     printf("%d", ft_recursive_factorial(i));
// }
