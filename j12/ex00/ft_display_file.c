/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:10:03 by rili              #+#    #+#             */
/*   Updated: 2017/03/29 21:03:06 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>


int	main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buf, 1) != 0)
			write(1, &buf, 1);
		close(fd);
	}
	return (0);
}
