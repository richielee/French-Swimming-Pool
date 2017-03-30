/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 20:08:27 by rili              #+#    #+#             */
/*   Updated: 2017/03/20 20:16:05 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int a, b;

	a = 1;
	b = 2;
	printf("Testing putchar:  \n");
	ft_putchar('t');
	ft_swap(&a, &b);
	printf("Testing swap: %d %d \n", a, b);
	printf("Testing putstring:  \n");
	ft_putstr("hello");
	printf("Testing strlen: %d \n", ft_strlen("hello"));
	printf("Testing strcmp: %d \n", ft_strcmp("ab", "ac"));
}
