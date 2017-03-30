/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 15:41:49 by rili              #+#    #+#             */
/*   Updated: 2017/03/18 17:57:51 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*' && *s1 == '\0')
		return (match(s1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	return (0);
}

int		main(int argc, char **argv)
{
	printf("s1 is %s, s2 is %s.\n match returns: %d\n", "abcd", "*", match("abcd", "*"));
	printf("s1 is %s, s2 is %s.\n match returns: %d\n", "abcd", "*bcd", match("abcd", "*bcd"));
	printf("s1 is %s, s2 is %s.\n match returns: %d\n", "abcd", "*abcd", match("abcd", "*abcd"));
	printf("s1 is %s, s2 is %s.\n match returns: %d\n", "abcd", "abcd*", match("abcd", "*abcd*"));
	printf("s1 is %s, s2 is %s.\n match returns: %d\n", "abcd", "a*c", match("abcd", "a*c"));
	printf("s1 is %s, s2 is %s.\n match returns: %d\n", "abcd", "b*d", match("abcd", "b*d"));
	if (argc == 3)
	{
		printf("s1 is %s, s2 is %s.\n match returns: %d\n", argv[1], argv[2], match(argv[1], argv[2]));
	}
}
