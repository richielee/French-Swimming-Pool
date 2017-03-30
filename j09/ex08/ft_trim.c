/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:11:03 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 15:24:14 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ltrim(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	return (str);
}

char *rtrim(char *str)
{
	char *new;

	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		*new = *str;
		new++;
		str++;
	}
	//*(new + 1) = '\0';
	return (new);
}

int		main(void)
{
	char s1[] = "Preident    ";
	char s2[] = "  \tPresident";

	printf("%s\n", ltrim(s2));
	printf("%s\n", rtrim(s1));
}
