/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:45:14 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 13:45:54 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
//     char *s1 = "";
//     char *s2 = "";
//     printf("%d ma ft\n", ft_strcmp(s1,s2));
//     printf("%d la ft OG", strcmp(s1,s2));
//}
