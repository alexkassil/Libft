/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:54:41 by akassil           #+#    #+#             */
/*   Updated: 2017/08/28 00:33:24 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strlen(char *str);

char	*ft_strdup(char *str)
{
	int		size;
	int		i;
	char	*new;

	size = ft_strlen(str);
	new = malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (new);
	i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
