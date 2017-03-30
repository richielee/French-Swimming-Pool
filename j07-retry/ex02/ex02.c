/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 13:22:51 by rili              #+#    #+#             */
/*   Updated: 2017/03/24 12:27:59 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(int argc, char **argv)
{
	int *tab[78];
	int i;
	int len;

	i = 0;
	len = ft_ultimate_range(tab, atoi(argv[1]), atoi(argv[2]));
	printf("len is %d\n", len);
/*	while (i < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("%d\n", *tab[i]);
		i++;
	}*/
	printf("hi %d\n", *tab[2]);
	printf("%d\n", argc);
}
