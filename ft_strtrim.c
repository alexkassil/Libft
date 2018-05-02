/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:07:38 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 16:34:06 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_ws(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == ' '
		|| c == '\f')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		l;
	char	*r;

	l = ft_strlen((char *)s);
	while (is_ws(s[l - 1]))
		l--;
	i = -1;
	while (is_ws(s[++i]))
		l--;
	if (l <= 0)
		return (ft_strnew(0));
	r = ft_strnew(l);
	s += i;
	if (r)
		ft_strncpy(r, (char *)s, l);
	return (r);
}
