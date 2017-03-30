/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laranda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:30:05 by laranda           #+#    #+#             */
/*   Updated: 2017/03/26 18:00:55 by rili             ###   ########.fr       */
/*   Updated: 2017/03/25 20:50:46 by laranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "helpers.h"

char	*ft_charcat(char *dest, char src);

char	to_concat00(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == 0 && j == x - 1))
		return ('o');
	else if (i == y - 1 && j == 0)
		return ('o');
	else if (i == y - 1 && j == x - 1)
		return ('o');
	else if (i == 0 || i == y - 1)
		return ('-');
	else if (j == 0 || j == x - 1)
		return ('|');
	else
		return (' ');
}

char	*rush00(int x, int y)
{
	int i;
	int j;
	int len;
	char *rush;

	i = 0;
	len = (x + 1) * y;
	if (!(rush = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_charcat(rush, to_concat00(i, j, x, y));
			j++;
		}
		ft_charcat(rush, '\n');
		i++;
	}
	return (rush);
}
