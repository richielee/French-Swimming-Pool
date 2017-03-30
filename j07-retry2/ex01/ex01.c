/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:22:51 by rili              #+#    #+#             */
/*   Updated: 2017/03/24 11:24:38 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	else
	{
		int len;
		int i;
		int *tab;

		i = 0;
		len = atoi(argv[2]) - atoi(argv[1]);
		tab = ft_range(atoi(argv[1]),atoi(argv[2]));
		while (i < len)
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
}
