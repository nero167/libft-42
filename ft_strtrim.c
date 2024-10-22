/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:02:02 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/22 10:11:14 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *new_string;
	size_t i;
	size_t start;
	size_t end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	new_string = (char *)malloc((end - start + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	i = 0;
	while (start < end)
		new_string[i++] = s1[start++];
	new_string[i] = '\0';
	return (new_string);
}