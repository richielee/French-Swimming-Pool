/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:29:00 by rili              #+#    #+#             */
/*   Updated: 2017/03/16 17:08:36 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

int	main(void)
{
	char *a;
	char b[30];

	a = "This is a test string.";
	ft_strcpy(b, a);
	printf("%s\n", b);

	char *c;
	char d[30];

	c = "This is a test string.";
	strcpy(d, c);
	printf("%s\n", d);
}
