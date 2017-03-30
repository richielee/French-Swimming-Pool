/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:58:40 by rili              #+#    #+#             */
/*   Updated: 2017/03/15 15:03:13 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return ft_fibonacci(index - 1) + ft_fibonacci(index -2);
	}
}

int		main(void)
{
	for (int i = -10; i < 50; i++)
	{
		printf("The %dth Fibonnaci number is %d\n", i, ft_fibonacci(i));
	}
	return (0);
}
