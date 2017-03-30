/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:59:50 by rili              #+#    #+#             */
/*   Updated: 2017/03/26 17:45:49 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int *tab;
	int i;

	i = 0;
	tab = (int*)malloc(sizeof(int) * 9);
	if (!tab)
		return (0);
	if (argc == 4)
	{
		while (i < 9)
		{
			tab[i] = argv[1][i] - '0';
			i++;
		}
		write_output(tab, atoi(argv[2]), atoi(argv[3]));
	}
	return (0);
}
