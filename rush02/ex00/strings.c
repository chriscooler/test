/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:39:09 by akotzky           #+#    #+#             */
/*   Updated: 2020/10/25 19:52:29 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (i++ < ft_strlen(str))
		write(1, &str[i], 1);
}

int		ft_count_chars_line(int index, char *file)
{
	int		i;
	int		count;
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	i = 0;
	count = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (i == index)
		{
			if (c >= '0' || c <= '9')
				count++;
			else if (c == '\n')
				break ;
		}
		else if (c == '\n')
			i++;
	}
	close(fd);
	return (count);
}
