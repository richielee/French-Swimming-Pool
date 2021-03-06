/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:40:27 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 15:43:31 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_max(int *tab, int length)
{
	int i;
	int m;

	i = 0;
	m = tab[i];
	while (i < length)
	{
		if (tab[i] > m)
		{
			m = tab[i];
		}
		i++;
	}
	return (m);
}

int		main(void)
{
	int tab[] = {1,2,3,4,3,3,5,6,33,2};
	printf("%d\n", ft_max(tab, 10));
}
