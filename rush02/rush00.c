/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laranda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:30:05 by laranda           #+#    #+#             */
/*   Updated: 2017/03/25 20:27:50 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	print(int i, int j, int x, int y)
{

	// be careful with the char!
	if ((i == 0 && j == 0) || (i == 0 && j == x - 1))
		ft_putchar('o');
	else if (i == y - 1 && j == 0)
		ft_putchar('o');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('o');
	else if (i == 0 || i == y - 1)
		ft_putchar('-');
	else if (j == 0 || j == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
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
