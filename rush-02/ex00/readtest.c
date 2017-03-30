/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 19:33:20 by dhadley           #+#    #+#             */
/*   Updated: 2017/03/26 18:15:58 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include "helpers.h"

char	*ft_read(void)
{
	int		ret;
	int		i;
	char	*buf;
	char	*receivedstring;
	char	*tmp;

	buf = (char*)malloc(sizeof(char) * 2);
	receivedstring = (char*)malloc(sizeof(char) * 1);
	receivedstring[0] = '\0';
	i = 1;
	while ((ret = read(0, buf, 1)) != 0)
	{
		buf[ret] = '\0';
		tmp = (char*)malloc(sizeof(char) * i + 1);
		ft_strcpy(tmp, receivedstring);
		receivedstring = (char*)malloc(sizeof(char) * (ft_strlen(tmp) + 2));
		receivedstring = ft_strcat(tmp, buf);
		i++;
	}
	return (receivedstring);
}

int		main(void)
{
	char	*input;
	int		x;
	int		y;
	int		*tab;

	input = ft_read();
	x = x_str(input);
	y = y_str(input);
	tab = compare_rush(input, x, y);
	write_output(tab, x, y);
	return (0);
}
