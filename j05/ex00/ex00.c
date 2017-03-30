/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:39:54 by rili              #+#    #+#             */
/*   Updated: 2017/03/16 11:45:21 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;

	s1 = "hello";
	s2 = "Bonjour";
	s3 = "";
	ft_putstr(s1);
	ft_putstr(s2);
	ft_putstr(s3);
}
