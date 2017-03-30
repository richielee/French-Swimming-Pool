/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 17:11:48 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 16:54:20 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*crawler;

	crawler = begin_list;
	if (crawler)
	{
		while (crawler->next)
		{
			crawler = crawler->next;
		}
		return (crawler);
	}
	return (0);
}
