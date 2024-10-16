/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:19:24 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/16 13:25:14 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
   unsigned char *ptr;
   int   i;

   i = 0;
   ptr = s; 
   while(n--)
   {
        ptr[i] = 0;
        *(ptr + i) = 0;
        i++;
   }
}