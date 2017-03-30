/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:33:23 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 17:24:18 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),\
		void *data_ref, int (*cmp()))
{
	t_list *crawler;

	crawler = begin_list;
	while (crawler)
	{
		if (cmp(crawler, data_ref) == 0)
			f(crawler->data);
		crawler = crawler->next;
	}
}
