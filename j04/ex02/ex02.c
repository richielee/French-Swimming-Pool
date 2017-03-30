/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:47:24 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 14:59:12 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int ans;

	ans = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (power > 0)
		{
			ans *= nb;
			power--;
		}
	}
	return (ans);
}

int		main(void)
{
	for (int i = 0; i < 20; i++)
	{
	printf("2^%d is %d\n", i, ft_iterative_power(2,i));
	}
	return (0);
}
