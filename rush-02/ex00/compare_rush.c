/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laranda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:45:08 by laranda           #+#    #+#             */
/*   Updated: 2017/03/26 18:09:11 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "helpers.h"

char	first_char(char *str)
{
	return (*str);
}

int		x_str(char *str)
{
	int	x;
	
	x = 0;
	while (*str && *str != '\n')
	{
		x++;
		str++;
	}
	return (x);
}

int		y_str(char *str)
{
	int	y;

	y = 0;
	while (*str)
	{
		if (*str == '\n')
			y++;
		str++;
	}
	return (y);
}

void	transform_compare(int *tab)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (tab[i] == 0)
			tab[i] = 1;
		else
			tab[i] = 0;
		i++;
	}
}

int		*compare_rush(char *str, int x, int y)
{
	int *compare;
	int i;

	i = 0;
	if (!(compare = (int*)malloc(sizeof(int) * 5)))
		return (NULL);
	rushx[0] = rush00;
	rushx[1] = rush01;
	rushx[2] = rush02;
	rushx[3] = rush03;
	rushx[4] = rush03;
	while (i < 5)
	{
		compare[i] = ft_strcmp(rushx[i](x, y), str);
		i++;
	}
	transform_compare(compare);
	return (compare);
}
