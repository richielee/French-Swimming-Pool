/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 14:59:56 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 15:04:51 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*crawler;
	t_list	*tmp;

	crawler = *begin_list;
	tmp = NULL;
	while (crawler)
	{
		if (crawler->next)
			tmp = crawler->next;
		else
			tmp = NULL;
		free(crawler);
		crawler = tmp;
	}
}
