/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 14:02:06 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 16:00:29 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *r;
	void *temp;

	r = (malloc(size));
	temp = r;
	if (r)
		while (size--)
			*(char *)r++ = 0;
	return (temp);
}
