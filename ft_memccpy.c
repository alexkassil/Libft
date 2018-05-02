/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 15:50:52 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 15:51:37 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(char *)(dest++) = *(char *)(src++);
		if (*(unsigned char *)(dest - 1) == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}
