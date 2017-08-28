/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:41:14 by akassil           #+#    #+#             */
/*   Updated: 2017/07/11 20:03:52 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int n)
{
	int			i;
	static char	string[11];

	if (!(i = 0) && n < 0)
		string[10] = '-';
	else if ((n = -n) || 1)
		string[0] = 48;
	while (n < 0 || !(i = 10))
	{
		string[i] = -(n % 10) + 48;
		i++;
		n /= 10;
	}
	while (i >= 0)
	{
		if ((string[i] >= 48 && string[i] <= 57) || string[i] == 45)
		{
			ft_putchar(string[i]);
			string[i] = 0;
		}
		i--;
	}
}
