/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 16:32:58 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 16:41:06 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*crawler;
	t_list	*prev;
	t_list	*new;

	crawler = *begin_list;
	while (crawler && cmp(crawler->data, data) >= 0)
	{
		prev = crawler;
		crawler = crawler->next;
	}
	new = ft_create_elem(data);
	prev->next = new;
	new->next = crawler;
}
