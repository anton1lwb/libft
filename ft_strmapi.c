/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:20:12 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/18 16:20:15 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*out;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = 0;
	while (s[len])
		len++;
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (i < len)
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}

// int main()
// {
//     printf("%s\n",ft_strmapi("lalala", test));
// }