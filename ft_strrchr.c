/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 00:49:16 by akassil           #+#    #+#             */
/*   Updated: 2018/04/29 00:53:17 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *r;

	r = NULL;
	while (1)
	{
		if (*s == (char)c)
			r = s;
		if (!*s)
			return (r);
		*s++;
	}

	return (r);
}
