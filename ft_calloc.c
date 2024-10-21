/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:29:09 by namirtha          #+#    #+#             */
/*   Updated: 2024/10/21 14:25:55 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(size * num);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (num * size));
	return (ptr);
}
