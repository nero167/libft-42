/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:24:36 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/16 17:27:47 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t lenofsrc;
    size_t lenofdst;

    lenofsrc = ft_strlen(src);
    lenofdst = ft_strlen(dst);
    if(dstsize <= lenofdst)
        return (dstsize + lenofsrc);
    i = 0;   
    while (src[i] && (lenofdst + i) < (dstsize - 1))
    {
        dst[lenofdst + i] = src[i];
        i++;
    }
    dst[lenofdst + i] = '\0';
    return(lenofdst + lenofsrc);
    }