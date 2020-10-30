/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 17:13:54 by chchao            #+#    #+#             */
/*   Updated: 2020/10/13 21:19:45 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = -1;
	while (++x <= 98)
	{
		y = x;
		while (++y <= 99)
		{
			ft_putchar((char)(x / 10) + '0');
			ft_putchar((char)(x % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(y / 10) + '0');
			ft_putchar((char)(y % 10) + '0');
			if ((x != 98))
			{
				write(1, ", ", 2);
			}
		}
	}
}
