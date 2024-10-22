/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:11:15 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/22 07:56:53 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strjoin(char const *s1, char const *s2)
// {
//   char *new_string;
//   size_t  i;
//   size_t  x;
//   size_t  len_s1;
//   size_t  len_s2;

//   len_s1 = ft_strlen(s1);
//   len_s2 = ft_strlen(s2);
//   if (s1 || s2)
//     return(NULL);
//   new_string = (char *)malloc((len_s1 + len_s2) + 1);
//   if(!new_string)
//     return(NULL);
//   i = 0;
//   while(len_s1--)
//   {
//     new_string[i] = s1[i];
//     i++;
//   }
//   x = 0;
//   while(len_s2--)
//   {
//     new_string[i] = s2[x];
//     i++;
//     x++;
//   }
//   new_string[i] = '\0';
//   return (new_string);
// }
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	new_string = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new_string[i++] = *s1++;
	}
	while (*s2)
	{
		new_string[i++] = *s2++;
	}
	new_string[i] = '\0';
	return (new_string);
}
