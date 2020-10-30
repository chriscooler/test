/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:37:38 by chchao            #+#    #+#             */
/*   Updated: 2020/10/13 20:47:53 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;

	x = -1;
	while (++x <= 7)
	{
		y = x;
		while (++y <= 8)
		{
			z = y;
			while (++z <= 9)
			{
				ft_putchar('0' + x);
				ft_putchar('0' + y);
				ft_putchar('0' + z);
				if (x < 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
