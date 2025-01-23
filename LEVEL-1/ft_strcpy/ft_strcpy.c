/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:58:52 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 00:04:17 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy( char *s1, char *s2)
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
/*
#include <stdio.h>
int main ()
{
	char testsrc[] = "hello";
	char testdest[] = " ";
	ft_strcpy(testdest, testsrc);
	printf("dest = %s", testdest);
	return (0);
}
*/