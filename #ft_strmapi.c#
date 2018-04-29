/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 14:42:58 by akassil           #+#    #+#             */
/*   Updated: 2018/04/29 14:43:23 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *r;
	char *temp;
	size_t i;

	r = ft_strnew(ft_strlen(s));
	temp = r;
	i = 0;
	if (r)
		while (*s)
			*r++ = f(i++, *s++);
	return (temp);
}
