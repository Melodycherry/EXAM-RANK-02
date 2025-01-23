/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:30:03 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/11 13:44:59 by mlaffita         ###   ########.fr       */
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

void	ft_union(char *s1, char *s2)
{
	int i;
	int index;
	char result[256] = {0};

	i = 0;
	index = 0;
	while (s1[i])
	{
		if (!already(result, s1[i], index))
		{
			result[index] = s1[i];
			write(1, &s1[i], 1);
			index++;
		}
		i++;
	}
	i = 0;
while (s2[i])
	{
		if (!already(result, s2[i], index))
		{
			result[index] = s2[i];
			write(1, &s2[i], 1);
			index++;
		}
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}