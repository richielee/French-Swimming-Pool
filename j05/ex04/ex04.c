/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:32:40 by rili              #+#    #+#             */
/*   Updated: 2017/03/16 17:15:17 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char a[] = "This is a test String";
	char b[20];
	char c[20];
	char d[20];

	printf("%s\n", a);

	ft_strncpy(b, a, 2);
	printf("ft: %s\n", b);
	strncpy(c, a, 2);
	printf("original: %s\n", c);

	ft_strncpy(c, a, 12);
	printf("ft: %s\n", c);
	strncpy(d, a, 12);
	printf("original: %s\n", d);
}
