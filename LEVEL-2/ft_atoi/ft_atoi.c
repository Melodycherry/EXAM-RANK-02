/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:08:36 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 16:33:04 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi( const char *str)
{
	int i;
	int signe;
	int result;

	i = 0;
	signe = 1;
	while ( str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * - 1;
		i++;
	}
	while (str[i] >= '0' && str[i]<= '9')
	{
		result = result * 10 + ( str[i] - '0');
		i++;
	}
	return(signe * result);
}
/*
#include <stdio.h>
int main ()
{
	int soluce;
	soluce = ft_atoi("-432");
	printf("%d", soluce);
	return (0);
}
*/