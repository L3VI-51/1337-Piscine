/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:03:15 by kmanar            #+#    #+#             */
/*   Updated: 2026/07/22 15:49:23 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
 	int main()
	{ 
	
	char src[] = "Hello";
	char dest[6];

	ft_strcpy(dest, src);
	write(1, dest, 5);
	write(1, "\n", 1);
	return (0);
}
*/
