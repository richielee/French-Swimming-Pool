/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:20:12 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 13:38:34 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int ans;
	int i;

	ans = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char str[] = "abjaslkdjfaijdfawjef";
	char empty[] = "";
	char bad[] = "^&";
	printf("%s is alphanumerical ? %d\n", str, ft_str_is_alpha(str));
	printf("%s is alphanumerical ? %d\n", empty, ft_str_is_alpha(empty));
	printf("%s is alphanumerical ? %d\n", bad, ft_str_is_alpha(bad));


}

