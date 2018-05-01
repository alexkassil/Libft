/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:07:38 by akassil           #+#    #+#             */
/*   Updated: 2018/04/30 23:07:12 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int l;
	char *r;

	l = ft_strlen((char *)s);
	while (is_whitespace(s[l - 1]))
		l--;
	i = -1;
	while (is_whitespace(s[++i]))
		l--;
	if (l <= 0)
		return ft_strnew(0);
	r = ft_strnew(l);
	s += i;
	if (r)
		ft_strncpy(r, (char *)s, l);
	return (r);
}
