/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:06:09 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/04 23:32:25 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1][i] == ' ' || argv[1][i] == '	')
	{
		while (argv[1][i] == ' ' || argv[1][i] == '	')
			i++;
	}
	while (argv[1][i] != ' ' && argv[1][i] != '	' && argv[1][i] != '\0' )
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}