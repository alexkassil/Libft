/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:03:56 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 16:06:14 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	char	*temp;
	size_t	len;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	r = ft_strnew(len);
	temp = r;
	if (r)
		while (*s1)
			*r++ = *s1++;
	if (r)
		while (*s2)
			*r++ = *s2++;
	return (temp);
}
