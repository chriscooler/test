/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 10:12:17 by chchao            #+#    #+#             */
/*   Updated: 2020/10/27 18:49:55 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_iterative_power(int nb, int power)
{
	int		i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

#include <stdio.h>

int		main(void)
{
	printf("%d", ft_iterative_power(5, 5));
	printf("%d", ft_iterative_power(2, 5));
	printf("%d", ft_iterative_power(5, 10));
	printf("%d", ft_iterative_power(5, 4));
	printf("%d", ft_iterative_power(5, 8));
	printf("%d", ft_iterative_power(5, 5));
	printf("%d", ft_iterative_power(10, 5));
	printf("%d", ft_iterative_power(5, 5));
	printf("%d", ft_iterative_power(5, 5));
	printf("%d", ft_iterative_power(5, 5));
	printf("%d", ft_iterative_power(5, 0));	
}
