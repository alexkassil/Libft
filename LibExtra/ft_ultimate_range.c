/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:00:39 by akassil           #+#    #+#             */
/*   Updated: 2017/07/06 10:44:34 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int result;
	int *temp;
	int i;

	result = max - min;
	i = 0;
	if (min >= max)
	{
		*range = 0x0;
		return (0);
	}
	temp = (int *)malloc((sizeof(int) * (max - min)));
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (result);
}
