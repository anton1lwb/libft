/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:10:59 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/19 15:52:42 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	tab = malloc(sizeof(unsigned char *) * (elementCount * elementSize));
	while (i < elementCount)
	{
		ft_bzero(tab, elementSize);
		i++;
	}
	return ((void *)tab);
}
