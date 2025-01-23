/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:54:43 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 17:29:40 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen ( char *str)
{
	int len;

	len = 0;
	while ( str[len] != '\0')
		len ++;
	return (len);
}

char *ft_strcpy( char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char *ft_strdup(char *src)
{
	char *dest;

	dest = (char *) malloc(sizeof (char) * (ft_strlen(src) + 1));
	if ( dest == NULL)
		return (NULL);
	ft_strcpy (dest, src);
	return (dest);
}
/*
#include <stdio.h>

int main ()
{
    char    *chaine_src;
    char    *chaine_dest;

    chaine_src = "hello";
    chaine_dest = ft_strdup(chaine_src);
    printf("%s\n", chaine_dest);
    free(chaine_dest);
    return (0);
}
*/