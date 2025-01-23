/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:34:16 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/21 22:44:12 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void fill(char **tab, t_point size, int x, int y, char target)
{
    // Vérifier si on est en dehors des limites du tableau
    if (x < 0 || y < 0 || x >= size.x || y >= size.y)
        return;
    
    // Vérifier si la case actuelle est différente du caractère à remplacer
    if (tab[y][x] != target)
        return;

    // Remplacer le caractère par 'F'
    tab[y][x] = 'F';

    // Appels récursifs pour remplir les cellules adjacentes (haut, bas, gauche, droite)
    fill(tab, size, x + 1, y, target); // Droite
    fill(tab, size, x - 1, y, target); // Gauche
    fill(tab, size, x, y + 1, target); // Bas
    fill(tab, size, x, y - 1, target); // Haut
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x]; // Le caractère à remplacer
    if (target != 'F')  // Éviter de remplir si la cellule est déjà remplie
        fill(tab, size, begin.x, begin.y, target);
}
