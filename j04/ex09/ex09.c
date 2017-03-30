/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 13:58:01 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 14:38:33 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	g_board[20];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int	i;

	column = 1;
	while (column <= 8)
	{
		if (place(row, column))
		{
			g_board[row] = column;
			if (row == 8)
			{
				i = 1;
				while (i < 9)
				{
					ft_putchar(g_board[i] + '0');
					i++;
				}
				ft_putchar('\n');
			}
			else
				queen(row + 1);
		}
		++column;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	queen(1);
}

int		main(void)
{
	ft_eight_queens_puzzle_2();
}
