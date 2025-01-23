/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:44:28 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/07 13:57:47 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk ( const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] !='\0')
	{
		j= 0;
		while ( s2[j] != '\0')
		{	
			if (s1[i] == s2[j])
				return ((char*)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char s[] = "onjour";
	char v[] = "aeiou";
	ft_strpbrk(s, v);
	printf ("%p",ft_strpbrk(s, v));
	return (0);
}
*/