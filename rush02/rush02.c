/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laranda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:30:05 by laranda           #+#    #+#             */
/*   Updated: 2017/03/11 12:08:07 by laranda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
	{
		ft_putchar('A');
	}
	else if (i == 0 && j == x - 1)
	{
		ft_putchar('A');
	}
	else if (i == y - 1 && j == 0)
	{
		ft_putchar('C');
	}
	else if (i == y - 1 && j == x - 1)
	{
		ft_putchar('C');
	}
	else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
