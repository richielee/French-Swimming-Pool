/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:21:20 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 14:52:08 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];
	char str4[20];

	strcpy(str1 , "abcdefg");
	strcpy(str2 , "hijklmno");
	strcpy(str3 , "abcdefg");
	strcpy(str4 , "hijklmno");
	printf("%s\n", strcat(str1, str2));
	printf("%s\n", ft_strcat(str3, str4));
}
