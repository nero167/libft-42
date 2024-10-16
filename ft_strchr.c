/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:42:55 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/16 18:13:16 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    ch;

    ch = (char)c;
    while(*s)
    {
        if(*s == ch)
            return (char *)s;
        s++;
    }
    if (ch == '\0')
        return (char *)s;

    return (0);
}