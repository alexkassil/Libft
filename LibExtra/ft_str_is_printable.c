/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:19:15 by akassil           #+#    #+#             */
/*   Updated: 2017/07/04 16:42:40 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(is_printable(*str)))
			return (0);
		str++;
	}
	return (1);
}
