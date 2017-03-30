/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 20:04:06 by rili              #+#    #+#             */
/*   Updated: 2017/03/13 14:58:32 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int try;

	try = 1;
	while (try * try < nb)
	{
		try++;
	}
	if (nb % try == 0)
	{
		return (try);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	for (int i = 0; i < 50; i++)
	{
		printf("The sqrt of %d is %d\n", i * i, ft_sqrt(i * i));
	}
}
