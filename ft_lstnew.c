/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 20:42:21 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 15:53:03 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *r;

	r = (t_list *)malloc(sizeof(t_list) + content_size);
	if (!r)
		return (r);
	if (content)
	{
		r->content = malloc(content_size);
		ft_memcpy(r->content, content, content_size);
		r->content_size = content_size;
	}
	else
	{
		r->content = NULL;
		r->content_size = 0;
	}
	return (r);
}
