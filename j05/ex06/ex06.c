/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:18:52 by rili              #+#    #+#             */
/*   Updated: 2017/03/16 17:36:33 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 & *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	char *a;
	char *b;
	char *c;
	char *d;

	a = "a";
	b = "b";
	c = "9";
	d = "7";
	printf("%s, %s, %d\n", a, b, strcmp(a, b));
	printf("ft: %s, %s, %d\n", a, b, ft_strcmp(a, b));
	printf("%s, %s, %d\n", c, d, strcmp(c, d));
	printf("ft: %s, %s, %d\n", c, d, ft_strcmp(c, d));
	printf("%s, %s, %d\n", "ab", "aa", strcmp("ab", "aa"));
	printf("ft: %s, %s, %d\n", "ab", "aa", ft_strcmp("ab", "aa"));
	printf("%s, %s, %d\n", "11", "12", strcmp(a, b));
	printf("ft: %s, %s, %d\n", "11", "12", ft_strcmp(a, b));
}
