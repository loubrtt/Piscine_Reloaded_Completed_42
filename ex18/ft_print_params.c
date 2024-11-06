/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:52:33 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 16:18:18 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	if (ac <= 1)
		return (0);
	while (av[y])
	{
		while (av[y][i])
		{
			ft_putchar(av[y][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		y++;
	}
}
