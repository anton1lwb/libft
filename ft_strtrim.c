/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:47:17 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/19 15:47:26 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	out = malloc((end - start + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (start < end)
		out[i++] = s1[start++];
	out[i] = '\0';
	return (out);
}
