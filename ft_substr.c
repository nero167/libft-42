/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:52:46 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/21 16:21:05 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char  *substring;
  size_t i;

  substring = (char *)malloc(len + 1);
  i = 0;
  while(i < len &&)
  {
    substring = s[start];
    i++;
    start++;
  }
}