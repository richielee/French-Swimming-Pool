/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 15:33:28 by rili              #+#    #+#             */
/*   Updated: 2017/03/28 17:09:01 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"
#include "ft_opp.h"


int			ft_check(long long b, char op)
{
	if ((op == '%' || op == '/') && b == 0)
		return (-1);
	if (!(op == '%' || op == '/' || op == '*' || op == '+' || op == '-'))
		return (0);
	return (1);
}

long long	ft_doop(long long a, long long b, char c)
{
	if (c == '%')
		return (a % b);
	if (c == '/')
		return (a / b);
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '*')
		return (a * b);
	return (0);
}

int			main(int argc, char **argv)
{
	long long	a;
	long long	b;
	char		op;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = argv[2][0];
		if (ft_check(b, op) != 1)
		{
			if (ft_check(b, op) == -1)
			{
				if (op == '%')
					ft_putstr("Stop : modulo by zero");
				else
					ft_putstr("Stop : division by zero");
			}
			else
				ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
		ft_putnbr(ft_doop(a, b, op));
		ft_putchar('\n');
	}
	return (0);
}
