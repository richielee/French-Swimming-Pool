/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:08:02 by rili              #+#    #+#             */
/*   Updated: 2017/03/27 17:48:31 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int	main(int argc, char **argv)
{
	t_stock_par *stock;

	stock = ft_param_to_tab(argc, argv);
	ft_show_tab(stock);
}
