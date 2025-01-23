/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:52:46 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/21 22:53:48 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"


t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;       
    t_list *start;  // Pointeur pour stocker le début de la liste.

    start = lst;    // Sauvegarde du début de la liste pour le retour final.

    // Parcours de la liste tant qu'il y a au moins deux éléments.
    while (lst != NULL && lst->next != NULL) 
    {
        // Appel de la fonction de comparaison fournie par l'utilisateur.
        // Si cmp retourne 0, cela signifie que les éléments sont dans le mauvais ordre.
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            // Échange des valeurs des nœuds actuels pour les trier.
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;

            // Après un échange, recommencer le tri depuis le début de la liste.
            lst = start;
        }
        else
        {
            // Sinon, avancer au nœud suivant dans la liste.
            lst = lst->next;
        }
    }
    
    // Retourne le pointeur du début de la liste triée.
    return (start);
}
