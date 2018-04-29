/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 01:19:11 by akassil           #+#    #+#             */
/*   Updated: 2018/04/29 01:24:29 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int cmpn(char *s1, const char *s2, size_t n)
{
	while (*s1)
	{
		if (n == 0)
			return (0);
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (1);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	while (len--)
	{
		if (cmpn(little, big, len+1))
			return (big);
		if (!*big)
			break;
		big++;
	}
	return (NULL);
}
