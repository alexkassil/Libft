/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:33:20 by akassil           #+#    #+#             */
/*   Updated: 2017/07/05 12:44:43 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_char_table(char **tab, int size)
{
	int swapped;
	int i;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < size)
		{
			if (ft_strcmp(tab[i], tab[i - 1]) < 0)
			{
				ft_swap(&tab[i], &tab[i - 1]);
				swapped = 1;
			}
			i++;
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	ft_sort_char_table(++argv, argc - 1);
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
