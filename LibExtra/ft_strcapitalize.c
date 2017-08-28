/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:37:08 by akassil           #+#    #+#             */
/*   Updated: 2017/07/04 15:00:23 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_special(char c)
{
	if (c == ' ' || c == '+' || c == '-')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i + 1])
	{
		if (is_special(str[i]))
		{
			if (is_lowercase(str[i + 1]))
				str[i + 1] -= 32;
		}
		else if (is_uppercase(str[i + 1]))
			str[i + 1] += 32;
		i++;
	}
	if (is_lowercase(str[0]))
		str[0] -= 32;
	return (str);
}
