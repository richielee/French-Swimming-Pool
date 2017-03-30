/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:21:20 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 15:00:21 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
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
	printf("%s\n", strncat(str1, str2, 3));
	printf("%s\n", ft_strncat(str3, str4, 3));
}
