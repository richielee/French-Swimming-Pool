/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 13:42:25 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 14:10:00 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		base /= 2;
	else
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}

int		main(void)
{
	for (int i = 1; i < 100; i++)
	{
		printf("%d -> %d\n", i, ft_collatz_conjecture(i));
	}
}
