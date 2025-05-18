/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:59:02 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/15 08:59:15 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *srch, size_t len)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (!str || !srch)
		return (NULL);
	if (ft_strlen(srch) == 0)
		return ((char *) str);
	len_n = ft_strlen(srch);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == srch[j] && i + j < len)
			j++;
		if (j == len_n)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}