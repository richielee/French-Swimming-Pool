/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 18:23:47 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 16:57:36 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		count;

	count = 0;
	list = ft_create_elem(av[count]);
	tmp = list;
	while (count < ac)
	{
		tmp = tmp->next;
		tmp = ft_create_elem(av[count]);
		count++;
	}
	return (list);
}
