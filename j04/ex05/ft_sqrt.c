/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 20:04:06 by rili              #+#    #+#             */
/*   Updated: 2017/03/13 14:59:45 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int try;

	try = 1;
	while (try * try < nb)
	{
		try++;
	}
	if (nb % try == 0)
	{
		return (try);
	}
	else
	{
		return (0);
	}
}
