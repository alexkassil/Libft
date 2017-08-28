/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:39:21 by akassil           #+#    #+#             */
/*   Updated: 2017/07/06 10:44:15 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*result;
	char	*temp;
	int		i;
	int		j;

	size = 0;
	while (argc > 1)
		size += ft_strlen(argv[--argc]) + 1;
	result = malloc(sizeof(char) * (size + 1));
	temp = result;
	i = 1;
	j = 0;
	while (argv[i])
	{
		while (*argv[i])
			*result++ = *argv[i]++;
		*result++ = '\n';
		i++;
	}
	*--result = '\0';
	return (temp);
}
