/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:01:02 by akassil           #+#    #+#             */
/*   Updated: 2017/07/04 20:10:21 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	if (n == 0)
		return (dest);
	if (!(*src))
	{
		*dest++ = '\0';
		return (ft_strncpy(dest, src, n - 1) - 1);
	}
	*dest++ = *src++;
	return (ft_strncpy(dest, src, n - 1) - 1);
}
