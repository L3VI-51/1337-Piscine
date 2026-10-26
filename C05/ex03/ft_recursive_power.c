/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 11:22:50 by kmanar            #+#    #+#             */
/*   Updated: 2026/08/01 11:40:00 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rcp(int rsl, int nb, int power)
{
	rsl *= nb;
	power--;
	if (power > 0)
		return (ft_rcp(rsl, nb, power));
	return (rsl);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_rcp(1, nb, power));
}
