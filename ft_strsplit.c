/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:33:37 by akassil           #+#    #+#             */
/*   Updated: 2018/05/02 16:13:41 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		sep(char c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n'));
}

static	int		length(char *str, char c)
{
	int i;

	i = 0;
	while ((*str != c) && *str)
	{
		str++;
		i++;
	}
	return (i);
}

static	int		get_words(char *str, char c)
{
	int i;
	int chr;

	i = 0;
	chr = 0;
	while (*str)
	{
		if ((*str) == c)
		{
			str++;
			chr = 0;
		}
		else
		{
			if (chr == 0)
				i++;
			chr = 1;
			str++;
		}
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		words;
	int		word_number;
	char	**result;
	char	*word;
	int		i;

	i = 0;
	word_number = 0;
	words = get_words((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (result);
	while (words > word_number)
	{
		while (*s == c)
			s++;
		word = (char *)malloc(sizeof(char) * (length((char *)s, c) + 1));
		while (!(*s == c) && *s)
			word[i++] = *s++;
		word[i] = '\0';
		result[word_number++] = word;
		i = 0;
	}
	result[word_number] = 0;
	return (result);
}
