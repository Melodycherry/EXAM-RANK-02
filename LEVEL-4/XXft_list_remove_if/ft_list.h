/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 23:07:57 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/21 23:08:46 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>

// Définition de la structure d'un élément de la liste chaînée
typedef struct s_list
{
    struct s_list *next;  // Pointeur vers l'élément suivant de la liste
    void          *data;  // Pointeur générique pour stocker n'importe quel type de données
} t_list;

#endif

