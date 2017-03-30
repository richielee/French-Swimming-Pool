/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:56:38 by rili              #+#    #+#             */
/*   Updated: 2017/03/27 15:07:22 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_total_len(int argc, char **argv)
{
	int total_len;
	int i;

	total_len = 0;
	i = 1;
	while (i < argc)
	{
		total_len += ft_strlen(argv[i]) + 1;
		i++;
	}
	return (total_len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;
	char	*str;

	str = (char*)malloc(sizeof(*str) * ft_total_len(argc, argv));
	if (!str)
		return (void*)0;
	i = 1;
	c = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[c++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[c++] = '\n';
		i++;
	}
	str[c] = '\0';
	return (str);
}
