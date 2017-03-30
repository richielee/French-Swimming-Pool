/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 21:38:39 by rili              #+#    #+#             */
/*   Updated: 2017/03/29 17:21:50 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*output;

	i = 0;
	output = (int*)malloc(sizeof(int) * length);
	if (!output)
		return (NULL);
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
