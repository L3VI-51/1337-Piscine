/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 20:40:57 by kmanar            #+#    #+#             */
/*   Updated: 2026/07/16 20:41:29 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	xoo;
	char	oxo;
	char	oox;

	xoo = '0';
	while (xoo <= '7')
	{
		oxo = xoo + 1;
		while (oxo <= '8')
		{
			oox = oxo + 1;
			while (oox <= '9')
			{
				write(1, &xoo, 1);
				write(1, &oxo, 1);
				write(1, &oox, 1);
				if (!(xoo == '7' && oxo == '8' && oox == '9'))
					write(1, ", ", 2);
				oox++;
			}
			oxo++;
		}
		xoo++;
	}
}
