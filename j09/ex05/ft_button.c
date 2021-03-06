/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 13:07:53 by rili              #+#    #+#             */
/*   Updated: 2017/03/17 13:30:54 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_button(int i, int j, int k)
{
	while (!(i <= j && j <= k))
	{
		if (i > j)
			ft_swap(&i, &j);
		if (j > k)
			ft_swap(&j, &k);
	}
	return (j);
}
