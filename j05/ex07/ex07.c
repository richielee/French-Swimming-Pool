/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:18:52 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 13:14:47 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] & s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *a;
	char *b;
	char *c;
	char *d;
	int	i;

	i = 1;
	a = "a";
	b = "b";
	c = "9";
	d = "7";
	printf("%s, %s, %d\n", a, b, strncmp(a, b, i));
	printf("ft: %s, %s, %d\n", a, b, ft_strncmp(a, b, i));
	printf("%s, %s, %d\n", c, d, strncmp(c, d,i));
	printf("ft: %s, %s, %d\n", c, d, ft_strncmp(c, d, i));
	printf("%s, %s, %d\n", "ab", "aa", strncmp("ab", "aa", i));
	printf("ft: %s, %s, %d\n", "ab", "aa", ft_strncmp("ab", "aa", i));
	printf("%s, %s, %d\n", "11", "12", strncmp(a, b, i));
	printf("ft: %s, %s, %d\n", "11", "12", ft_strncmp(a, b, i));
}
