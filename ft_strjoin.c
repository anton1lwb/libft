/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:43:32 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/20 11:34:55 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*out;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	out = malloc(s1_len + s2_len + 1);
	if (!out)
		return (NULL);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[i - s1_len])
	{
		out[i] = s2[i - s1_len];
		i++;
	}
	out[i] = '\0';
	return (out);
}
// int	main(void)
// {
// 	char *test1 = "salut mon gars comment ca va?";
// 	char *test2 = "test";
// 	printf("%s", ft_strjoin(test1, test2));
// }