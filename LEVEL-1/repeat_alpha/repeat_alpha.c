/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:49:50 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 10:59:09 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int i;
	int count;

	i = 0;
	if ( argc != 2 )
	{
		write (1, "\n", 1);
		return (0);
	}
	while ( argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			count = argv[1][i] - 'a' + 1;
			while ( count > 0)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			count = argv[1][i] - 'A' + 1;
			while ( count > 0)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}