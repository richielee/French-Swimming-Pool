/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:22:51 by rili              #+#    #+#             */
/*   Updated: 2017/03/22 18:09:48 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int len;
	int i;

	if (min >= max)
		return (0);
	len = max - min;
	tab = (int*)malloc(sizeof(*tab) * (len));
	if (!tab)
		return (0);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
