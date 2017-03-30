/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:54:29 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 15:01:17 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return ft_recursive_power(nb, power -1) * nb;
	}
}

int		main(void)
{
	for (int i = -10; i < 20; i++)
	{
		printf("2^%d is %d\n", i, ft_recursive_power(2,i));
	}
}
