/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:58:22 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 16:06:44 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_unmatch(int *tab, int length)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (i < length)
	{
		c ^= tab[i];
		i++;
	}
	return (c);
}

int	main(void)
{
	int tab[] = {1, 1, 2, 3, 4, 3, 4};
	printf("%d\n", ft_unmatch(tab, 7));
}
