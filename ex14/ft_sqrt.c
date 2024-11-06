/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:46:20 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 13:47:42 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	carre;

	carre = 1;
	if (nb < 0)
		return (0);
	if (nb == 2147395600)
		return (46340);
	if (nb > 2147395600)
		return (0);
	while (carre * carre < nb)
		carre++;
	if (carre * carre == nb)
		return (carre);
	return (0);
}

// #include <stdio.h>
// int main (void)
// {
//     int i = 46338 * 46338;
//     printf("%d", ft_sqrt(i));
// }
