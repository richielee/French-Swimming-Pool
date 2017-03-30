/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:10:55 by rili              #+#    #+#             */
/*   Updated: 2017/03/26 18:04:33 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
#define TABLEN 5

char	*output_string(int i)
{
	if (i == 5)
		return ("rectangle");
	if (i == 6)
		return ("square");
	if (i == 7)
		return ("triangle");
	if (i == 8)
		return ("lozenge");
	else
		return (ft_strcati("rush-0", i));
}

void	print_match(int i, int width, int height)
{
	ft_putchar('[');
	ft_putstr(output_string(i));
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putchar(']');
}

void	write_output(int *tab, int width, int height)
{
	int match;
	int i;
	int printcount;

	match = 0;
	i = 0;
	printcount = 0;
	while (i < TABLEN)
	{
		match += tab[i];
		i++;
	}
	i = 0;
	while (i < TABLEN)
	{
		if (tab[i] == 1)
		{
			print_match(i, width, height);
			printcount++;
		}
		if (printcount < match && tab[i] == 1)
			ft_putstr(" || ");
		i++;
	}
	ft_putchar('\n');
}
