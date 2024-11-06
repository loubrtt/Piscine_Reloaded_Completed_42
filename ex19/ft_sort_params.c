/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:55:56 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/06 16:50:44 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2 [i]);
}

void	ft_printparams(char **av)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
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

int	main(int ac, char **av)
{
	int		y;
	char	*temp;

	temp = 0;
	y = 1;
	if (ac < 2)
		return (0);
	while (av[y + 1])
	{
		if (ft_strcmp(av[y], av[y + 1]) > 0)
		{
			temp = av[y + 1];
			av[y + 1] = av[y];
			av[y] = temp;
			y = 0;
		}
		y++;
	}
	ft_printparams(av);
}
