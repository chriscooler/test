/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:26:59 by chchao            #+#    #+#             */
/*   Updated: 2020/10/26 17:28:55 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nb_max;

	nb_max = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb_max = nb * -1;
	}
	if (nb_max >= 10)
		ft_putnbr(nb_max / 10);
	ft_putchar('0' + nb_max % 10);
}
