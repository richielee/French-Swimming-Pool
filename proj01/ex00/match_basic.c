/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 15:41:49 by rili              #+#    #+#             */
/*   Updated: 2017/03/18 16:49:38 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("s1 is %s, s2 is %s.\n match returns: %d\n", argv[1], argv[2], match(argv[1], argv[2]));
	}
}
