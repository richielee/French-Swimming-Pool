/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laranda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:52:04 by laranda           #+#    #+#             */
/*   Updated: 2017/03/26 17:53:55 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	index;
	int diff;

	index = 0;
	diff = 0;
	while (diff == 0 && s1[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			diff = s1[index] - s2[index];
		}
		index++;
	}
	if (s2[index] != '\0' && diff == 0)
		diff = s1[index] - s2[index];
	return (diff);
}
