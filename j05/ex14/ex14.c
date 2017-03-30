/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:20:55 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 13:20:57 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int ans;
	int i;

	ans = 1;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ans *= 1;
		}
		else
		{
			ans *= 0;
		}
		i++;
	}
	return (ans);
}

int		main(void)
{
	char str[] = "LAKSDFJKALSDJFKSDFKD";
	char bad[] = "jaiksdfD";
	char empty[] = "";

	printf("%s is uppercase? %d\n", str, ft_str_is_uppercase(str));
	printf("%s is uppercase? %d\n", bad, ft_str_is_uppercase(bad));
	printf("%s is uppercase? %d\n", empty, ft_str_is_uppercase(empty));
}

