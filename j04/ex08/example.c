/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 13:58:01 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 14:27:24 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_board[20];
int	g_count;

int		ft_abs(int a, int b)
{
	return (a >= b ? (a - b) : (b - a));
}

int		place(int row, int column)
{
	int	i;

	i = 1;
	while (i <= row - 1)
	{
		if (g_board[i] == column)
			return (0);
		else if (ft_abs(g_board[i], column) == ft_abs(i, row))
			return (0);
		i++;
	}
	return (1);
}

void	queen(int row)
{
	int	column;

	column = 1;
	while (column <= 8)
	{
		if (place(row, column))
		{
			g_board[row] = column;
			if (row == 8)
				g_count++;
			else
				queen(row + 1);
		}
		++column;
	}
}

int		ft_eight_queens_puzzle(void)
{
	g_count = 0;
	queen(1);
	return (g_count);
}

int		main(void)
{
	printf("%d\n", ft_eight_queens_puzzle());
}
