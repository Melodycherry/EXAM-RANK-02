/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rst_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:14:08 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/12 14:00:48 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '	' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		write (1, &str[i], 1);
		i++;
	}	
}

int main (int argc, char *argv[])
{
	int i;

	i = 1;
	if ( argc < 2)
		write (1, "\n", 1);
	while ( i < argc)
	{
		rstr_capitalizer(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}