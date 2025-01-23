/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 21:44:54 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 21:55:13 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d",(atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d",(atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d",(atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d",(atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d",(atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}