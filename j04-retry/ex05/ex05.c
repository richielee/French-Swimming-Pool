/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 20:04:06 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 17:28:11 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int try;
	
	if (nb <= 0)
		return (0);
	try = 1;
	while (try * try < nb && try < 46341)
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
	printf("%d sqrt = %d\n", -25, ft_sqrt(-25));
	printf("%d sqrt = %d\n", 2147483647, ft_sqrt(2147483647));
	printf("%d sqrt = %d\n", 2147395600, ft_sqrt(2147395600));


}
