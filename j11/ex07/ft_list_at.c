/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:10:40 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 15:14:09 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*crawler;

	i = 0;
	crawler = begin_list;
	while (crawler && i < nbr)
	{
		if (crawler == 0)
			return (0);
		else
			crawler = crawler->next;
		i++;
	}
	return (crawler);
}
