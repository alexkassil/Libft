/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 17:56:53 by akassil           #+#    #+#             */
/*   Updated: 2018/04/28 18:28:38 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == ' '
		|| c == '\f')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	// Make result an unsigned long long, and if the result goes over long max,
	// return -1 is negative, 0 if positive
	long result;
	int sign;
	int i;

	i = 0;
	result = 0;
	sign = 1;
	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return (result * sign);
}
