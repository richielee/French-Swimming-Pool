/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:38:43 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 15:57:33 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*crawler;
	t_list	*next;
	t_list	*prev;

	crawler = *begin_list;
	prev = NULL;
	while (crawler)
	{
		if (cmp(crawler, data_ref) == 0)
		{
			next = crawler->next;
			prev->next = next;
			free(crawler);
			crawler = next;
		}
		prev = crawler;
		crawler = crawler->next;
	}
}
