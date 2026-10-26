/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 10:00:13 by kmanar            #+#    #+#             */
/*   Updated: 2026/08/01 11:14:10 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fac(int f, int nb)
{
	f *= nb;
	nb--;
	if (nb > 0)
		return (fac(f, nb));
	return (f);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (fac(1, nb));
}
