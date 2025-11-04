/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:46:25 by rceschel          #+#    #+#             */
/*   Updated: 2025/11/04 12:46:28 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../ft_lib.h" // ft_memcpy

void *ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
    void *new;

    /* Caso 1: nuova dimensione zero → libera e ritorna NULL */
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    /* Caso 2: ptr è NULL → si comporta come malloc() */
    if (ptr == NULL)
        return malloc(new_size);

    /* Caso 3: normale riallocazione */
    new = malloc(new_size);
    if (new == NULL)
        return NULL;

    /* Copia solo i byte che esistono in entrambe le allocazioni */
    if (old_size < new_size)
        ft_memcpy(new, ptr, old_size);
    else
        ft_memcpy(new, ptr, new_size);

    free(ptr);
    return new;
}
