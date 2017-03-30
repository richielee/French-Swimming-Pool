/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:22:51 by rili              #+#    #+#             */
/*   Updated: 2017/03/24 12:28:25 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	int *tab;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	len = max - min;
	tab = (int*)malloc(sizeof(int) * (len));
	if (!tab)
	{
		tab = (void *)0;
		return (0);
	}
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
