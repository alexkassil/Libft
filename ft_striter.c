/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 14:30:41 by akassil           #+#    #+#             */
/*   Updated: 2018/04/29 14:35:32 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}