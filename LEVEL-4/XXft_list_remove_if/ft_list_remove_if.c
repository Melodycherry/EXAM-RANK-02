/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 23:07:25 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/21 23:07:27 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    // Vérifie si la liste est vide ou si le pointeur de début est NULL
    if (begin_list == NULL || *begin_list == NULL)
        return;

    // Déclaration d'un pointeur temporaire pour stocker l'élément courant
    t_list *cur = *begin_list;

    // Vérifie si la donnée actuelle correspond à la donnée de référence
    if (cmp(cur->data, data_ref) == 0)
    {
        // Si oui, mettre à jour le pointeur de début pour sauter l'élément actuel
        *begin_list = cur->next;

        // Libérer la mémoire de l'élément supprimé
        free(cur);

        // Appel récursif sur le reste de la liste avec le nouvel élément en tête
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        // Important : sans ce bloc 'else', la Moulinette peut détecter un problème
        // Il faut continuer avec le reste de la liste si l'élément actuel ne correspond pas
        cur = *begin_list;

        // Appel récursif sur le prochain élément de la liste
        ft_list_remove_if(&cur->next, data_ref, cmp);
    }
}
