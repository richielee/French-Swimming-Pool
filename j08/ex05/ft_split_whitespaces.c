/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 14:29:11 by rili              #+#    #+#             */
/*   Updated: 2017/03/27 17:07:51 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int		is_valid(char c)
{
	return (!(c == '\t' || c == ' ' || c == '\n'));
}

int		count_words(char *str)
{
	int i;
	int state;
	int wc;

	wc = 0;
	i = 0;
	state = 0;
	while (str[i] != '\0')
	{
		if (!(is_valid(str[i])))
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
		i++;
	}
	return (wc);
}

int		ft_word_len(char *str, int start)
{
	int i;

	i = 0;
	while (str[start + i] != '\0' && is_valid(str[start + i]))
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *str, int start)
{
	int		i;

	i = 0;
	while (str[start + i] != '\0' && is_valid(str[start + i]))
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		word;

	tab = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	if (!tab)
		return (0);
	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !(is_valid(str[i])))
			i++;
		if (str[i] != '\0')
		{
			tab[word] = (char*)malloc(sizeof(char) * (ft_word_len(str, i) + 1));
			if (!tab[word])
				return (0);
			ft_strcpy(tab[word], str, i);
			i += ft_word_len(str, i);
			word++;
		}
	}
	tab[word] = 0;
	return (tab);
}
