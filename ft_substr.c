/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:52:46 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/21 18:10:54 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char  *substring;
  size_t i;

  if (!s)
    return (NULL);
  if(ft_strlen(s) < start)
    len = 0;
  if((ft_strlen(s) - start) < len)
    len = ft_strlen(s) - start;
  substring = (char *)malloc(len + 1);
  if (!substring)
    return NULL;
  i = 0;
  while(len--)
  {
    substring[i++] = s[start++];
  }
  substring[i] = '\0';  
  return (substring);
}