/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:59:02 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/20 11:36:43 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	big_len;

	i = 0;
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (!big_len && little_len)
		return (NULL);
	while (i + little_len <= len)
	{
		if (big[i] == little[0] || !little_len)
		{
			if ((ft_strncmp(&big[i], little, little_len)) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
