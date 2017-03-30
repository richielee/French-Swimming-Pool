/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:00:16 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 17:55:40 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!(ft_is_prime(i)))
	{
		i++;
	}
	return (i);
}

int main(void)
{
	int nb;

	nb = 2147483000;
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
	nb = ft_find_next_prime(nb);
	printf("Next prime: %d\n", nb);
}