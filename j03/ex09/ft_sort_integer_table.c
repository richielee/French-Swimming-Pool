/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:08:38 by rili              #+#    #+#             */
/*   Updated: 2017/03/13 17:11:52 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(int *tab, int size)
{
	int	i;
	int	ok;

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
