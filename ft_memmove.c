/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:25:27 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/14 16:11:59 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    if (!dst || !src)
        return (0);
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (s < d && d < s + len)
        while (len--)
                d[len] = s[len];
    else
        while (len--)
        {
        *(d++) = *(s++);
        }
    return (dst);
}