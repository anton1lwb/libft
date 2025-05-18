/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:44:25 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/18 16:16:58 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strrchr(char *str, char c)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i])
    {
        if (c == str[i])
            return (&str[i]);
        i--;
    }
    return (0);
}