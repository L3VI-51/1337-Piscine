/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 08:05:07 by kmanar            #+#    #+#             */
/*   Updated: 2026/08/05 15:57:43 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	countword(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (!is_sep(str[i], charset) && str[i])
		{
			i++;
		}
		count++;
		while (is_sep(str[i], charset) && str[i])
			i++;
	}
	return (count);
}

int	strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	*copy_word(char *str, char *charset, int *k)
{
	int		j;
	int		len;
	char	*word;

	len = strlen_sep(str + *k, charset);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (!is_sep(str[*k], charset) && str[*k])
	{
		word[j] = str[*k];
		j++;
		(*k)++;
	}
	word[j] = '\0';
	while (is_sep(str[*k], charset) && str[*k])
		(*k)++;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		totalword;
	char	**res;

	while (is_sep(*str, charset) && *str)
		str++;
	totalword = countword(str, charset);
	res = malloc(sizeof(char *) * (totalword + 1));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (i < totalword)
	{
		res[i] = copy_word(str, charset, &k);
		if (!res[i])
			return (NULL);
		i++;
	}
	res[i] = NULL;
	return (res);
}
