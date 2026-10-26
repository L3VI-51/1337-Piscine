/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 19:40:58 by kmanar            #+#    #+#             */
/*   Updated: 2026/08/03 18:50:42 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ints;

	if (min >= max)
		return (0);
	i = 0;
	ints = malloc (sizeof(int) * (max - min));
	if (!ints)
		return (NULL);
	while (max > min)
	{
		ints[i] = min;
		i++;
		min++;
	}
	return (ints);
}
