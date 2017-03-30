/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:33:57 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 14:48:53 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int ans;

	if (nb < 0)
	{
		return (0);
	}
	ans = 1;
	while (nb >1)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}

int		main(void)
{
	for (int i = -15; i <= 10; i++)
	{
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
	}
	return (0);
}
