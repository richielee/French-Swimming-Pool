/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 16:42:54 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 17:55:09 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	in_the_loop(t_list *crawler1, t_list *crawler2, t_list *result,\
		int (*cmp)())
{
	while (crawler1 && crawler2)
	{
		if (cmp(crawler1->data, crawler2->data) < 0)
		{
			result = crawler1;
			crawler1 = crawler1->next;
		}
		else
		{
			result = crawler2;
			crawler2 = crawler2->next;
		}
		result = result->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,\
		int (*cmp)())
{
	t_list	*crawler1;
	t_list	*crawler2;
	t_list	*result;
	t_list	*meta_result;

	crawler1 = *begin_list1;
	crawler2 = begin_list2;
	result = 0;
	if (cmp(crawler1->data, crawler2->data) < 0)
	{
		result = crawler1;
		crawler1 = crawler1->next;
	}
	else
	{
		result = crawler2;
		crawler2 = crawler2->next;
	}
	meta_result = result;
	result = result->next;
	in_the_loop(crawler1, crawler2, result, cmp);
	*begin_list1 = meta_result;
}
