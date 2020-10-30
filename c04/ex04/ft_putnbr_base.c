/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:13:20 by chchao            #+#    #+#             */
/*   Updated: 2020/10/26 17:57:37 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int	x;
	int	y;

	if (ft_strlen(base) < 2)
		return (0);
	x = 0;
	while (base[x])
	{
		if (base[x] == '-' || base[x] == '+' || base[x] < 32 || base[x] > 126)
			return (0);
		y = x + 1;
		while (base[y])
		{
			if (base[x] == base[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int					size_base;
	int					rest;
	int					i;
	unsigned int		nbr_max;

	nbr_max = nbr;
	i = 0;
	size_base = 0;
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr_max = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		rest = nbr_max % size_base;
		nbr_max = nbr_max / size_base;
		if (nbr_max > 0)
			ft_putnbr_base(nbr_max, base);
		ft_putchar(base[rest]);
	}
}
