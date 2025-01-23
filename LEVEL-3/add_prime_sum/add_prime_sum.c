/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:47:26 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/11 17:47:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	mini_atoi(char *str)
{
	int i = 0;
    int res = 0;
    while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
    return (res);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	mini_putnbr(int n)
{
	if (n >= 10)
		mini_putnbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		int	nbr = mini_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum = sum + nbr;
			nbr--;
		}
		mini_putnbr(sum);
	}
	if (ac != 2)
		mini_putnbr(0);
	write(1, "\n", 1);
	return (0);
}