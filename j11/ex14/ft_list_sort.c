/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 16:01:15 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 17:40:06 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_ssl(t_list *prev, t_list *crawler)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*fourth;

	first = prev;
	second = crawler;
	third = crawler->next;
	fourth = third->next;
	first->next = third;
	second->next = fourth;
	third->next = second;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*crawler;
	t_list	*prev;
	int		sorted;

	sorted = 0;
	prev = 0;
	while (sorted == 0)
	{
		crawler = *begin_list;
		sorted = 1;
		while (crawler)
		{
			if (cmp(crawler->data, (crawler->next)->data) > 0)
				ft_swap_ssl(prev, crawler);
			prev = crawler;
			crawler = crawler->next;
		}
	}
}
