/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:37:11 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/21 22:37:22 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
#define FLOOD_FILL_H

// Définition de la structure t_point
typedef struct s_point
{
    int x;
    int y;
} t_point;

// Déclaration de la fonction flood_fill
void flood_fill(char **tab, t_point size, t_point begin);

#endif
