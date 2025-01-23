/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:29:01 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/23 13:59:48 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
	len++;
	}
	return (len);
}
/*
int main()
{
	char *test;

	test = "hello";
	ft_strlen(test);
	printf("la longueur est %d",ft_strlen(test));
    return (0);	
}
*/
