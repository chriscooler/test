/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 12:04:06 by chchao            #+#    #+#             */
/*   Updated: 2020/10/11 19:28:23 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_bottom(int x)
{
	char	begin_end;
	char	mid;
	int		i;

	begin_end = 'o';
	mid = '-';
	i = 1;
	ft_putchar(begin_end);
	while (i <= x - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (x != 1)
		ft_putchar(begin_end);
	ft_putchar('\n');
}

void	second_rush(int x, int y)
{
	char	begin_end;
	char	mid;
	int		i;
	int		k;

	begin_end = '|';
	mid = ' ';
	k = 1;
	while (k <= y - 2)
	{
		ft_putchar(begin_end);
		i = 1;
		while (i <= x - 2)
		{
			ft_putchar(mid);
			i++;
		}
		if (x != 1)
			ft_putchar(begin_end);
		ft_putchar('\n');
		k++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	top_bottom(x);
	if (y != 1)
	{
		second_rush(x, y);
		top_bottom(x);
	}
}
