/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:58:14 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/06 22:09:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits( unsigned char octet)
{
	int i;
	unsigned char 	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i & 1 ) + '0';
		write (1, &bit, 1);	
		i--;
	}
}