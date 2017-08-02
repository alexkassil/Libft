/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:18:30 by akassil           #+#    #+#             */
/*   Updated: 2017/08/02 01:13:38 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int src_length;
	int dest_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	if ((int)size < dest_length)
		return (size + src_length);
	size -= dest_length;
	dest += dest_length;
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	return (src_length + dest_length);
}
