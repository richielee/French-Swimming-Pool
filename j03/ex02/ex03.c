/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 17:49:11 by rili              #+#    #+#             */
/*   Updated: 2017/03/12 17:57:55 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(void)
{
	int a = 1;
	int b = 2;

	printf("Before\n");
	printf("%d%d\n", a, b);
	ft_swap(&a, &b);
	printf("After\n");
	printf("%d%d\n", a, b);
	return (0);
}
