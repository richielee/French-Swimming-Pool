/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:37:09 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 12:52:20 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 42) % 26;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 42) % 26;
		}
		i++;
	}
	return (str);
}
