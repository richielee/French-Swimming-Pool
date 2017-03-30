/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:08:38 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 14:52:21 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check(int *tab, int size)
{
	int i;
	int ok;

	i = 0;
	ok = 0;
	while (i < size - 1)
	{
		if (tab[i] <= tab[i + 1])
		{
			ok++;
		}
		i++;
	}
	if (ok == size - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	ok;
	int	tmp;

	while (ft_check(tab, size) == 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

int		main(void)
{
	int tab[] = {2, 3, 4, 5, 6, -2, 31, 5, 6};
	int size;

	size = 9;
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	ft_sort_integer_table(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
}
