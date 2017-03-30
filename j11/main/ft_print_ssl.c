/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ssl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:59:24 by rili              #+#    #+#             */
/*   Updated: 2017/03/30 18:23:40 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>
t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_ssl(t_list *list)
{
	t_list	*crawler;

	crawler = list;
	while (crawler)
	{
		ft_putstr(crawler->data);
		ft_putchar('\n');
		crawler = crawler->next;
	}
}

int		main(int argc, char **argv)
{
	t_list	*test;

	test = ft_create_elem(argv[0]);
	ft_putstr("testing ft_create_elem:\n");
	ft_print_ssl(test);
	ft_putstr("testing ft_list_size:\n");
	printf("%d\n", ft_list_size(test));
	ft_putstr("testing ft_list_last:\n");
	ft_print_ssl(ft_list_last(test));
	ft_putstr("testing ft_list_push_params:\n");
	ft_print_ssl(ft_list_push_params(argc, argv));
}
