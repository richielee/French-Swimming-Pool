/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:37:09 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 12:52:58 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 42) % 26;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 42) % 26;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char test[] = "abcdefghijklmnopqrstuvwxyz!**&^%$% &#";
	char Test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ#!@#$ @#$2";

	printf("%s\n", ft_rot42(test));
	printf("%s\n", ft_rot42(Test));
	

}
