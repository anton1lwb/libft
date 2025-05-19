/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:53:58 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/15 08:53:58 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t destsize)
{
	size_t	dest_len;
	size_t	index;
	size_t	i;

	dest_len = ft_strlen(d);
	index = 0;
	while (d[index])
		index++;
	i = 0;
	while (s[i] && (i + index + 1) < (destsize))
	{
		d[index + i] = s[i];
		i++;
	}
	if (i < destsize)
		d[index + i] = '\0';
	if (destsize <= dest_len)
		return (ft_strlen(s) + destsize);
	else
		return (ft_strlen(s) + dest_len);
}
