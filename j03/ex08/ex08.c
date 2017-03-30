/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:55:31 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 15:36:24 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int	i;
	int	output;
	int	sign;

	i = 0;
	sign = 0;
	output = 0;
	while ((str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\v') || (str[i] == ' ') ||
			(str[i] == '\f') || (str[i] == '\r'))
	{
		i++;
	}
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] < '9'))
	{
		output = 10 * output + str[i] - '0';
		i++;
	}
	return (sign == 1 ? output * (-1) : output);
}
int	main(void)
{
	char	*a;
	char	*b;

	a = "+-123";
	b = "-123";
	printf("%s is %d in int.\n", a, atoi(a));
	printf("%s is %d in int.\n", a, ft_atoi(a));
	printf("%s is %d in int. \n", b, ft_atoi(b));
	return (0);
}
