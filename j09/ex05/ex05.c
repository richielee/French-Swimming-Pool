/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 13:07:53 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 13:30:04 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_button(int i, int j, int k)
{
	while (!(i <= j && j <=k))
	{
		if (i > j)
			ft_swap(&i, &j);
		if (j > k)
			ft_swap(&j, &k);
	}
	return (j);
}

int		main(void)
{
	printf("%d, %d, %d, -> %d\n", 1, 2, 3, ft_button(1,2,3));
	printf("%d, %d, %d, -> %d\n", 1, 1, 3, ft_button(1,1,3));
	printf("%d, %d, %d, -> %d\n", 1, 1, 1, ft_button(1,1,1));
	printf("%d, %d, %d, -> %d\n", 10, 2, 3, ft_button(10,2,3));
	printf("%d, %d, %d, -> %d\n", 1, 20, 3, ft_button(1,20,3));

}
