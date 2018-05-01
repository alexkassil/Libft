/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:41:59 by akassil           #+#    #+#             */
/*   Updated: 2018/04/30 23:03:42 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	int temp;
	int sign;
	int l;
	char *r;

	temp = n;
	sign = n < 0 ? 1 : 0;
	l = 0;
	if (sign)
		n *= -1;
	if (n == -2147483648 || n == 0)
		return n == 0 ? ft_strdup("0") : ft_strdup("-2147483648");
	while (temp && ++l)
		temp /= 10;
	r = ft_strnew(l + sign);
	if (r)
		while (l--)
		{
			r[l + sign] = (n % 10) + '0';
			n = n / 10;
		}
	if (r && sign)
		r[0] = '-';
	return (r);
}
