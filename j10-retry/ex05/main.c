/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:02:46 by rili              #+#    #+#             */
/*   Updated: 2017/03/29 15:10:41 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	subtract(int a, int b)
{
	return (a - b);
}


int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 3};
	printf("%d\n", ft_is_sort(tab, 7, subtract));
}

