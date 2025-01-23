/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:36:47 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/04 23:49:11 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
	if (nbr <= 9)
	{
		ft_putchar (nbr + '0');
	}
}

int main (int argc, char *argv[])
{
	int nbr;

	nbr = 1;
	while ( nbr < 101 )
	{
	if (nbr % 3 == 0 && nbr %5 == 0)
		write (1, "fizzbuzz\n", 9);
	else if (nbr % 3 == 0)
		write (1, "fizz\n", 5);
	else if (nbr % 5 == 0 )
		write (1, "buzz\n", 5);
	else
	{
		ft_putnbr(nbr);
		write (1, "\n", 1);
	}	
	nbr++;
	}
	return (0);
}