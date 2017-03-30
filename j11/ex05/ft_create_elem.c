/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:14:08 by rili              #+#    #+#             */
/*   Updated: 2017/03/28 17:14:12 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(list));
	if (!list)
		return (void*)(0);
	(*list).next = 0;
	(*list).data = data;
	return (list);
}
