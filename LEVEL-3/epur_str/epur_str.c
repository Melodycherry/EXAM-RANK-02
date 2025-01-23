/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:54:48 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/11 23:05:49 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int i;
	int flag;
	
	if (argc == 2)
	{
		i = 0;
		flag = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '	')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '	')
				flag = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '	'))
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write (1, &argv[1][i], 1);
			}
			i++;
		}	
	}
	write (1, "\n", 1);
	return (0);
}