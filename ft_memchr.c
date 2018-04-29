/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 00:43:10 by akassil           #+#    #+#             */
/*   Updated: 2018/04/29 00:43:11 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return (s);
		*(char *)s++;
	}
	return (NULL);
}
