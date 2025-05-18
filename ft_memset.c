/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:15:57 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/18 16:15:59 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
		*s1++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char str[] = "Hello";
// 	ft_memset(str, '5', 2);
// 	printf("%s", str);
// }