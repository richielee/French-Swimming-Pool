/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 21:23:04 by rili              #+#    #+#             */
/*   Updated: 2017/03/25 21:44:18 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	*ft_map(int *tab, int length, int(*f)(int));


int	times2(int i)
{
	return (i * 2);
}

int		main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8 ,9 ,0};
	int i;

	ft_map(tab, 10, &times2);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
