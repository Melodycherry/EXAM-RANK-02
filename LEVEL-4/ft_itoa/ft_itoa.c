/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:25:41 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/19 15:43:59 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	get_num_len(int nbr)
{
	int len;
	if ( nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int nbr)
{
	int len = get_num_len(nbr);
	char *str = (char *) malloc(len + 1);

	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if ( nbr == 0)
		str[0] = '0';
	while ( nbr > 0)
		{
			str[--len] = nbr % 10 + '0';
			nbr = nbr /10;
		}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s",ft_itoa(777));
	return (0);
}
*/