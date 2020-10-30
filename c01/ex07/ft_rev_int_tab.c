/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:46:25 by chchao            #+#    #+#             */
/*   Updated: 2020/10/15 17:15:58 by chchao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		first;
	int		last;
	int		swap;

	first = 0;
	last = size - 1;
	while (first < (size / 2))
	{
		swap = tab[first];
		tab[first] = tab[last];
		tab[last] = swap;
		first++;
		last--;
	}
}
