/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:33:57 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 17:07:45 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int ans;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	ans = 1;
	while (nb > 1)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}

int		main(void)
{
	for (int i = -5; i < 20; i++)
	{
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
	}
}
