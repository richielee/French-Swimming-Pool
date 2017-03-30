/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:36:36 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 17:25:00 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*crawler;

	crawler = begin_list;
	while (crawler)
	{
		if (cmp(crawler, data_ref) == 0)
			return (crawler);
		crawler = crawler->next;
	}
	return (0);
}
