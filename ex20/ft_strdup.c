/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobriott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:27:44 by lobriott          #+#    #+#             */
/*   Updated: 2024/11/05 13:30:40 by lobriott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstring;
	int		i;

	newstring = malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (newstring == NULL)
		return (newstring);
	i = 0;
	while (i < ft_strlen(src))
	{
		newstring[i] = src[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
/*#include <stdio.h>
int main (void)
{
    char *src = "HELLO";
    printf("%s", ft_strdup(src));
}*/
