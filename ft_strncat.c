/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:14:55 by akassil           #+#    #+#             */
/*   Updated: 2017/07/04 21:29:25 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *result;

	result = dest;
	while (*dest)
		dest++;
	while (*src && nb != 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (result);
}
