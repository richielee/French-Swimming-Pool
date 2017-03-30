/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laranda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 12:32:27 by laranda           #+#    #+#             */
/*   Updated: 2017/03/26 18:03:02 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_charcat(char *dest, char src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = src;
	dest[i + 1] = '\0';
	return (dest);
}
