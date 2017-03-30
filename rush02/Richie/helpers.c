/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:52:57 by rili              #+#    #+#             */
/*   Updated: 2017/03/25 19:38:15 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 0 && nb < 10)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

char	*ft_strcat(char *dest, int src)
{
	int		i;
	char	*str;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	str = (char*)malloc(sizeof(char) * (i + 2));
	i = 0;
	while (dest[i] != '\0')
	{
		str[i] = dest[i];
		i++;
	}
	str[i] = (char)(src + '0');
	i++;
	str[i] = '\0';
	return (str);
}
