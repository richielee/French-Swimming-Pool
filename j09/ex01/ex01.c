/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:48:27 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 11:29:27 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_clock(int hour)
{
	if (hour == 0)
		return (12);
	if (hour == 24)
		return (12);
	if (hour == 12)
		return (12);
	else
		return (hour % 12);
}

char *ft_ampm(int hour)
{
	if (hour < 12 || hour >= 24)
		return ("A.M.");
	else
		return ("P.M.");
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s", ft_clock(hour), ft_ampm(hour));
	printf("AND %d.00 %s\n", ft_clock(hour + 1), ft_ampm(hour + 1));
}

int		main(void)
{
	for (int i = 0; i < 25; i++)
	{
		ft_takes_place(i);
	}
}
