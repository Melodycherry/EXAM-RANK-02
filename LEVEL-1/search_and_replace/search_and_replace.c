/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:39:50 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 11:49:01 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if ( argc != 4)
	{
		write ( 1, "\n", 1);
		return (0);
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write ( 1, "\n", 1);
		return (0);
	}
	while ( argv[1][i] != '\0')
	{
		if ( argv[1][i] == argv[2][0])
			write (1, &argv[3][0], 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write ( 1, "\n", 1);
	return (0);
}