/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 13:42:14 by kmanar            #+#    #+#             */
/*   Updated: 2026/07/22 15:49:52 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (i > 0)
		{
			if ((str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9')
				&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "mEllo Im Levi 2ilove 3My+selF";
	ft_strcapitalize(str);
	printf("%s", str);
	return(0);
}
*/
