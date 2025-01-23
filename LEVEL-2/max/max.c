/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 22:12:06 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/05 22:21:04 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len )
{
	if (len == 0)
		return (0);
	unsigned int i;
	int result;

	i = 0;
	result = tab[i];
	while ( i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}