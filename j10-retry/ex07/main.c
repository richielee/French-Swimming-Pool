/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:45:18 by rili              #+#    #+#             */
/*   Updated: 2017/03/28 16:53:27 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);

int		main(int argc, char **argv)
{
	char	**tab;
	if (argc == 2)
	{
		tab = ft_split_whitespaces(argv[1]);
		ft_sort_wordtab(tab);
		ft_print_words_tables(tab);
	}
}
