/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:03:04 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/11 13:24:01 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	already(char *str, char c, int index)
{
	int i;
	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i= 0;
	while (s1[i] != '\0')
	{
		j =0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j] && !already(s1, s1[i], i))
			{
				write (1, &s1[i], 1);
				break;
			}
			j++;	
		}
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		inter (argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}