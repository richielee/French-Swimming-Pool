/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 21:02:50 by rili              #+#    #+#             */
/*   Updated: 2017/03/29 21:20:53 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	display_file(int argc, char **argv)
{
	int		i;
	char	buf;
	int		fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[1]);
			ft_putstr(": No such file or directory\n");
		}
		else
		{
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
		}
		close(fd);
		i++;
	}
}

void	display_stdin(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argv[1][0] == '-')
		display_stdin();
	display_file(argc, argv);
	return (0);
}
