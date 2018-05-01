/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 21:44:50 by akassil           #+#    #+#             */
/*   Updated: 2018/04/30 21:56:36 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *r;
	char *temp;
	
	while(start--)
		s++;

	r = ft_strnew(len);
	temp = r;
	if (r)
		while (len--)
			*r++ = *s++;
	return (temp);
}
