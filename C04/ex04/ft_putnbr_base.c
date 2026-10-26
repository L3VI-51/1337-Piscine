/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:18:10 by kmanar            #+#    #+#             */
/*   Updated: 2026/07/30 13:20:38 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '-' || str[i] == '+'
			|| str[i] == ' '
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = len(base);
	if (l <= 1)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / l), base);
		ft_putchar(base[-(nbr % l)]);
		return ;
	}	
	if (nbr < 0)
	{
		ft_putchar ('-');
		nbr = -nbr;
	}
	if (nbr >= l)
	{
		ft_putnbr_base(nbr / l, base);
	}
	ft_putchar(base[nbr % l]);
}
