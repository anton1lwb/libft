/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:24:54 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/20 11:16:30 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (ft_isdigit(*str)))
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (nb * sign);
}
