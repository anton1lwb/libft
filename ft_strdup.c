/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:18:31 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/19 14:55:25 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(s));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

// int main(int ac, char **av)
// {
//     (void)ac;
//     (void)av;
//     char *test;
//     test = "test";
//     printf("dup :%s\norigin :%s", ft_strdup(test), test);
// }