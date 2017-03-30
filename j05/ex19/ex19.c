/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:21:47 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 17:01:03 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str)

{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char str1[20];
	char str2[20];
	char str3[20];
	char str4[20];

	strcpy(str2, "hijklmno");
	strcpy(str4, "hijklmno");

	printf("%lu\n", strlcpy(str1, str2, argv[1][0] - '0'));
	printf("%s\n", str1);
	printf("%u\n", ft_strlcpy(str3, str4, argv[1][0] - '0'));
	printf("%s\n", str3);


}
