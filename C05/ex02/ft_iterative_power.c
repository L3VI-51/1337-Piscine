/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 11:14:47 by kmanar            #+#    #+#             */
/*   Updated: 2026/08/01 11:21:58 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rsl;

	if (power < 0)
		return (0);
	rsl = 1;
	while (power > 0)
	{
		rsl *= nb;
		power--;
	}
	return (rsl);
}
