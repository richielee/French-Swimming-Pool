/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 14:11:56 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 15:10:50 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_trim(char *str)
{
	char *new;

	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		*new = *str;
		new++;
		str++;
	}
	*new = '\0';
	return (new);
}

int		main(int argc, char **argv)
{
	int i;
	int ans;

	i = 0;
	ans = 0;
//	while (i < argc)
//	{
//		if (argv[i] == "president" || argv[i] == "attack" || argv[i] == "Powers")
//		{
//			ans++;
//		}
//	}
	if (ans > 0)
	{
		ft_putstr("Alert!!!");
	}
	char s[] = "	President ";
	char t[] = "\t\tPresident ";
	printf("%s\n", ft_trim(s));
	ft_putstr(ft_trim(t));
}

