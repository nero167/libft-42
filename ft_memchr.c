/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:02:52 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/17 18:03:33 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;
    unsigned char chr;
    size_t i;

    if (n == 0)
        return (0);

    ptr = (unsigned char *)s;
    chr = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if(ptr[i] == chr)    
            return (void *)(ptr + i);
        i++;
    }
    return (0);
}
