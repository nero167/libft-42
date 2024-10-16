/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:35:54 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/16 13:26:13 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    
    ptr = b;
    while(len > 0)
    {
        *ptr = (unsigned char) c;
        ptr++;
        len--;
    }
    return (b);
}
