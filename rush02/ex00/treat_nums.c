/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:29:45 by lbally            #+#    #+#             */
/*   Updated: 2020/10/25 19:47:48 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_stack(char *number, char **nums, char **words)
{
	int		len;
	int		i;
	char	tmp[3];

	len = ft_strlen(number);
	i = 0;
	while (len > 0)
	{
		if (number[i] == '0')
		{
			i++;
			len--;
			continue ;
		}
		if (len % 3 == 0)
		{
			tmp[0] = number[i++];
			ft_print_words(tmp, nums, words);
			ft_print_words("100", nums, words);
		}
		else if (len % 3 == 2)
		{
			if (number[i] >= '2' && number[i] <= '9')
			{
				tmp[0] = number[i++];
				tmp[1] = '0';
				ft_print_words(tmp, nums, words);
			}
			if (number[i] == '1' && number[i + 1] > '0')
			{
				tmp[0] = number[i];
				tmp[1] = number[i + 1];
				ft_print_words(tmp, nums, words);
				i += 2;
				len--;
			}
		}
		else if (len % 3 == 1)
			ft_print_words(&number[i++], nums, words);
		len--;
	}
}

void	ft_print_number(char *number, char **nums, char **words)
{
	char	tmp[38];
	int		a = 1;
	char	stack[4];
	int		len = ft_strlen(number);
	int		i;

	tmp[0] = '1';
	while (a < 38)
		tmp[a++] = '0';
	tmp[a] = '\0';
	while (len > 0)
	{
		stack[0] = number[i];
		stack[1] = number[i + 1];
		stack[2] = number[i + 2];
		stack[3] = '\0';
		ft_print_stack(stack, nums, words);
		len -= 3;
		tmp[len + 1] = '\0';
		if (len < 2)
			break ;
		ft_print_words(tmp, nums, words);
		i += 3;
	}
}

void	ft_print_words(char *str, char **nums, char **words)
{
	int j;

	j = 0;
	while (j < 41)
	{
		if (ft_strcmp(str, nums[j]) == 0)
		{
			ft_putstr(words[j]);
			ft_putstr(" ");
			break ;
		}
		j++;
	}
}
