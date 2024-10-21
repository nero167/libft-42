/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:09:25 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/17 17:53:21 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    if (n == 0)
        return (0);
    i = 0;
    while (i < n && s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    if (i < n)
    {
        return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
    }
    return (0);
}