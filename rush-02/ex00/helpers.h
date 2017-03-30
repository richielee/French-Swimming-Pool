/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:51:11 by rili              #+#    #+#             */
/*   Updated: 2017/03/26 18:09:22 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
char	*ft_strcati(char *s1, int s2);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*output_string(int i);
char	*ft_read(void);
char	first_char(char *str);
int		x_str(char *str);
int		y_str(char *str);
void	write_output(int *tab, int width, int height);
char	*ft_charcat(char *dest, char src);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
char	*(*rushx[5])(int, int);
int		*compare_rush(char *str, int x, int y);

#endif
