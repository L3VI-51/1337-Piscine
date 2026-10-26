/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 15:51:38 by kmanar            #+#    #+#             */
/*   Updated: 2026/07/29 12:14:43 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	f_write_nbr(long l)
{
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l >= 10)
		f_write_nbr(l / 10);
	ft_putchar(l % 10 + '0');
}

void	ft_putnbr(int nb)
{
	f_write_nbr(nb);
}
