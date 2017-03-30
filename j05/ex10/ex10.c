/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:19:59 by rili              #+#    #+#             */
/*   Updated: 2017/03/23 15:51:35 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 1;

	str = ft_lower(str);
	if (str[0] > 'a' && str[0] < 'z')
	{
		str[0] -= 32;
	}
	while(str[i] != '\0')
	{
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z') 
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			if (str[i] > 'a' && str[i] < 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);

	char strempty[] = "";
	ft_strcapitalize(strempty);
	printf("%s\n", strempty);
	printf("%s\n", ft_strcapitalize(argv[1]));
}

