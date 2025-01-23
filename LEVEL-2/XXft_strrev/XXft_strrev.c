/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:06:41 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/07 15:23:36 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strlen(char *str)
{
	int len;
	while (str[len] != '\0')
		len++;
	return(len);
}

char	*ft_strrev(char *str)
{
	int start;
	int end;
	char temp;
	int len;
	
	start = 0;
	end = ft_strlen(str) - 1;
	while ( start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "abcd";
	ft_strrev(str);
	printf("%s", str);
	return(0);
}
*/