/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:21:08 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 13:21:10 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int ans;
	int i;

	ans = 1;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char bad[] = "\tjaiksdfD";
	char empty[] = "";

	printf("%s is printable? %d\n", str, ft_str_is_printable(str));
	printf("%s is printable? %d\n", bad, ft_str_is_printable(bad));
	printf("%s is printable? %d\n", empty, ft_str_is_printable(empty));
}

