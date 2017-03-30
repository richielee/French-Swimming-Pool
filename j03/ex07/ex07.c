/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:25:42 by rili              #+#    #+#             */
/*   Updated: 2017/03/13 15:41:20 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strrev(char *str)
{
	int len;
	int i;
	char tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[len - i - 1];
		str[len -i - 1] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "abcdefg";
	printf("string is %s\n", str);
	ft_strrev(str);
	printf("string is now %s\n", str);
	return (0);
}
