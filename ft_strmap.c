/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 14:35:56 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 20:02:36 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *r;
	char *temp;

	if (!s || !f)
		return (NULL);
	r = ft_strnew(ft_strlen((char *)s));
	temp = r;
	if (r)
		while (*s)
			*r++ = f(*s++);
	return (temp);
}
