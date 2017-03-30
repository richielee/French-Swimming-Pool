/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:20:41 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 13:20:43 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int ans;
	int i;

	ans = 1;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str[] = "asdfasdfasfse";
	char bad[] = "jaiksdfD";
	char empty[] = "";

	printf("%s is lowercase? %d\n", str, ft_str_is_lowercase(str));
	printf("%s is lowercase? %d\n", bad, ft_str_is_lowercase(bad));
	printf("%s is lowercase? %d\n", empty, ft_str_is_lowercase(empty));
}

