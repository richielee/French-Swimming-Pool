/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:37:13 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 13:36:24 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_eight_queens_puzzle(void)
{
	int	queens(int *board, int column, int c);
	int	check(int *board, int row, int column);
	int	ft_abs(int a, int b);

	int	board[8] = { 0, 0, 0, 0, 0, 0, 0, 0};
	int	c;
	
	c = queens(board, 1, 0);
	return (c);
}

int	check(int *board, int row, int column)
{
	int ft_abs(int a, int b);
	int i;

	i = 1;
	while (i < 9)
	{
		if (board[i] == column)
		{
			return (0);
		}
		else if (ft_abs(board[i], row) == ft_abs(i, column))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	queens(int *board, int column, int c)
{
	int	row;

	row = 1;
	while (row < 9)
	{
		if (check(board, row, column))
		{
			board[column] = row;
			if (column == 8)
			{
				c++;
				printf("%d\n", c);
				for (int j = 0; j < 8; j++)
				{
					printf("%d, ", board[j]);
				}
			}
			else
			{
				queens(board, column + 1, c);
			}
		}
		row++;
	}
	return (c);
}
int		ft_abs(int a, int b)
{
	if (a >= b)
	{
		return (a - b);
	}
	else
	{
		return (b - a);
	}
}

int	main(void)
{
	printf("%d\n", ft_eight_queens_puzzle());
}
