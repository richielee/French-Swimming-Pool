/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:22:17 by rili              #+#    #+#             */
/*   Updated: 2017/03/22 15:33:25 by rili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		check_valid_base(char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (0);
		j = 0;
		while (j < i)
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_valid_base(base) == 1)
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putnbr_base(nbr, base);
		}
		if (nbr >= ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putnbr_base(nbr % ft_strlen(base), base);
		}
		if (nbr < ft_strlen(base))
			ft_putchar(base[nbr]);
	}
}
