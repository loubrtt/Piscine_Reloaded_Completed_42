/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:36:49 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/06 17:07:17 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		file;
	char	i;

	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		write (1, "Cannot read file.\n", 18);
		return (0);
	}
	while (read(file, &i, 1) > 0)
		write (1, &i, 1);
	close (file);
	return (0);
}
