/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:55:30 by rili              #+#    #+#             */
/*   Updated: 2017/03/22 15:11:44 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *s1;
	char *s2;

	if (!*str)
		return (str);
	s1 = (char*)str;
	while (*s1)
	{
		start = (char*)s1;
		s2 = (char*)to_find;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (start);
		}
		s1 = start + 1;
	}
	return (0);
}
