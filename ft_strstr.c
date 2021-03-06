/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 00:53:48 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 16:13:58 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		cmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	while (1)
	{
		if (cmp(needle, haystack))
			return ((char *)haystack);
		if (!*haystack)
			break ;
		haystack++;
	}
	return (NULL);
}
