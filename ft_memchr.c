/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:15:42 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/18 16:17:50 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	size_t			i;

	uc_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (uc_s[i] == (unsigned char)c)
		{
			return ((void *)&uc_s[i]);
		}
		i++;
	}
	return ((void *)0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "ello";

// 	printf("%s\n", (char *) ft_memchr(str, 'u', 40));
// }