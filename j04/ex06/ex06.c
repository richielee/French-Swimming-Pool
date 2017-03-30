/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:00:16 by rili              #+#    #+#             */
/*   Updated: 2017/03/13 15:10:13 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	for (int i = 2; i < 123; i++)
	{
		printf("%d is prime? %d\n", i, ft_is_prime(i));
	}
	printf("%d is prime? %d\n", 1535847, ft_is_prime(1535847));
	printf("%d is prime? %d\n", 555691, ft_is_prime(555691));
	printf("%d is prime? %d\n", 555596749, ft_is_prime(555596749));
}
