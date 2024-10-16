/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:14:32 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/16 13:24:58 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    if (!dst && !src)
        return (0);
    i = 0;
    while (n > 0)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
        n--;
    }
    return (dst);
}