/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlowenb <anlowenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:43:32 by anlowenb          #+#    #+#             */
/*   Updated: 2025/05/18 16:17:30 by anlowenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int getsize(char *s1)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        if (s1[i] == ' ')
            i++;
        else
        {
            j++;
            i++;
        }
    }
    return (j);
}

int getwords(char *s1)
{
    int i;
    int space;

    i = 0;
    space = 1;
    while (s1[i])
    {
        if (ft_isalnum(s1[i - 1]) && s1[i] == ' ' && ft_isalnum(s1[i + 1]))
            space++;
        i++;
    }
    return (space);
}

char *ft_strjoin(char *s1, char *s2)
{
    int i;
    int j;
    int k;
    char *str;

    i = 0;
    j = 0;
    k = 0;
    str = malloc(sizeof(char) * (getsize(s1) + getwords(s1)));
    while (s1[i])
    {
        if (s1[i] == ' ')
        {
            while (s2[k])
            {
                str[j] = s2[k];
                k++;
                j++;    
            }
            k = 0;
            i++;
        }
        else
        {
            str[j] = s1[i];
            j++;
            i++;    
        }
    }
    return (str);
}
int main(void)
{
    char *test1 = "salut mon gars comment ca va?";
    char *test2 = "test";
    printf("%s", ft_strjoin(test1, test2));
}