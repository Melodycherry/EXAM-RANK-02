/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:51:55 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 11:54:44 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main ( int argc, char *argv[])
{
	int i;

	i = 0;
	if ( argc != 2)
	{
		write ( 1, "\n", 1);
		return (0);
	}
	while ( argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			argv[1][i] = argv[1][i] - 32;
			write ( 1, &argv[1][i], 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			argv[1][i] = argv[1][i] + 32;
			write ( 1, &argv[1][i], 1);
		}
		else
			write ( 1, &argv[1][i], 1);
		i++;
	}
	write ( 1, "\n", 1);
	return (0);
}