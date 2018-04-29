/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 13:51:44 by akassil           #+#    #+#             */
/*   Updated: 2018/04/29 01:51:07 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *r;

	r = (char *)s;
	while (*r != (char)c)
	{
		if (!*r)
			return (NULL);
		r++;
	}

	return (r);
}
