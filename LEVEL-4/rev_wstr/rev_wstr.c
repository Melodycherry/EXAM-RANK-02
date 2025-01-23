/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:07:42 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/21 23:00:23 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int start;
	int end;
	int i = 0;
	int first; // Indice du premier caractère de la chaîne ignoré les espaces/tabs initiaux
		
	if(argc == 2)
	{   
		// Ignore les espaces et les tabulations au début de la chaîne
		while( argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		first = i; // Stocke la position du premier caractère non-espace/non-tab

		// Avance `i` jusqu'à la fin de la chaîne
		while(argv[1][i] != '\0')
			i++;
			
		// Parcourt la chaîne en sens inverse
		while(i >= first)
		{
			// Ignore les espaces/tabs en remontant vers le début
			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
			end = i; // Stocke la fin du mot actuel
			
			// Remonte jusqu'au début du mot actuel
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1; // Détermine le début du mot actuel

			// Flag pour vérifier si c'est le dernier mot ou non
			int  flag;
			flag = start;

			// Écrit le mot caractère par caractère
			while(start <= end)
			{
				write (1, &argv[1][start],1);
				start++;		
			}

			// Si ce n'est pas le premier mot, ajoute un espace entre les mots
			if (flag !=first)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}