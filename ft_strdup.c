/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:35:14 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/21 15:02:02 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strdup(const char *s1)
{
  size_t len;
  size_t i;
  char  *copy;

  len = ft_strlen(s1) + 1;
  copy = (char *)malloc(len);

  if (!copy)
    return (NULL);
  i = 0;
  while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
  return (copy);
}
