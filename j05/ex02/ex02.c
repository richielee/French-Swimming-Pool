/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:55:31 by rili              #+#    #+#             */
/*   Updated: 2017/03/16 12:04:42 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		output = 10 * output + str[i] - '0';
		i++;
	}
	return (sign == 1 ? output * (-1) : output);
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "+-123";
	str2 = "-+123";
	str3 = "\t123";
	str4 = "\t129t5";

	printf("1 %d\n", ft_atoi(str1));
	printf("2 %d\n", ft_atoi(str2));
	printf("3 %d\n", ft_atoi(str3));
	printf("4 %d\n", ft_atoi(str4));

}
