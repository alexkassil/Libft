/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:58:09 by akassil           #+#    #+#             */
/*   Updated: 2017/07/06 11:46:43 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sep(char c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n'));
}

int		length(char *str)
{
	int i;

	i = 0;
	while (!sep(*str) && *str)
	{
		str++;
		i++;
	}
	return (i);
}

int		ws(char *str)
{
	int i;

	i = 0;
	while (sep(str[i]) && str[i])
		i++;
	return (i);
}

int		get_words(char *str)
{
	int i;
	int chr;

	i = 0;
	chr = 0;
	while (*str)
	{
		if (sep(*str))
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

char	**ft_split_whitespaces(char *str)
{
	int		words;
	int		word_number;
	char	**result;
	char	*word;
	int		i;

	i = 0;
	word_number = 0;
	words = get_words(str);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	while (words > word_number)
	{
		while (sep(*str) && *str)
			str++;
		word = (char *)malloc(sizeof(char) * (length(str) + 1));
		while (!sep(*str) && *str)
			word[i++] = *str++;
		word[i] = '\0';
		result[word_number] = word;
		word_number++;
		i = 0;
	}
	result[word_number] = 0;
	return (result);
}
