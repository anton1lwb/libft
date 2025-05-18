/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:10:59 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/18 16:25:16 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *calloc( size_t elementCount, size_t elementSize)
{
    int i;
    int j;
    int test;

    i = 0;
    j = 0;
    test = malloc(sizeof(int) * (elementCount * elementSize));
    while (i < elementCount)
    {
        if (j < elementSize)
        {
            test[i][j] = '\0';
            j++;
        }
        else
        {
            j = 0;
            i++;
        }
    }
}