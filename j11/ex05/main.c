/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 14:56:54 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 15:09:31 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);

int		main(int argc, char **argv)
{
	t_list	**tmp;

	*tmp = ft_list_push_params(argc, argv);
	ft_list_clear(tmp);
}
