/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:48:07 by chchao            #+#    #+#             */
/*   Updated: 2020/10/28 17:04:17 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}