/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:11:34 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/22 14:05:47 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0; 
	while (*s && *s != c)
	{
		len++; 
		s++; 
	}
	return (len);
}

static int    ft_countwords(char const *s, char c)
{
    int	count;

    count = 0; 
    while (*s)
    {
        while (*s && *s == c)
            s++; 
        if (*s)
            count++; 
        while (*s && *s != c)
            s++; 
    }
    return (count);
}

static void   *ft_free(char **new_string)
{
    int i;

    i = 0;
    while (new_string[i])
        free(new_string[i++]);
    free(new_string);
    return (NULL);
}
char    **ft_split(char const *s, char c)
{
    char    **new_string;
    int     i;
    int     num_words;

    if (!s)
        return (NULL);
    num_words = ft_countwords(s, c);
    new_string = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (!new_string)
        return (NULL);
    new_string[num_words] = NULL;
    i = 0;
    while (i < num_words)
    {
        while (*s && *s == c)
            s++;
        new_string[i] = ft_substr(s, 0, ft_wordlen(s, c));
        if (!new_string[i])
            return (ft_free(new_string));
        s += ft_wordlen(s, c);
        i++;
    }
    return (new_string);
}
