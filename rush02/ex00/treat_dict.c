/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:40:14 by akotzky           #+#    #+#             */
/*   Updated: 2020/10/25 19:54:00 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_malloc_tabs(char *file, char **nums, char **words)
{
	int line;

	line = 0;
	nums = (char **)malloc(41 * sizeof(char *));
	words = (char **)malloc(41 * sizeof(char *));
	while (line < 41)
	{
		nums[line] = (char *)malloc((sizeof(char)
					* ft_count_chars_line(line, file)) + 1);
		words[line] = (char *)malloc((sizeof(char)
					* ft_count_chars_line(line, file)) + 1);
		line++;
	}
}

void	ft_words_to_tabs(char *tmp, char **words, char *file)
{
	int i;
	int j;
	int line;

	i = 0;
	line = 0;
	while (line < 41)
	{
		j = 0;
		while (tmp[i] != '\n')
		{
			if (tmp[i] >= 'a' && tmp[i] <= 'z')
				words[line][j] = tmp[i];
			else
			{
				i++;
				continue;
			}
			i++;
			j++;
		}
		i++;
		words[line][j] = '\0';
		line++;
	}
}

void	ft_nums_to_tabs(char *tmp, char **nums, char *file)
{
	int i;
	int j;
	int line;

	i = 0;
	line = 0;
	while (line < 41)
	{
		j = 0;
		while (tmp[i] != '\n')
		{
			if (tmp[i] >= '0' && tmp[i] <= '9')
				nums[line][j] = tmp[i];
			else
			{
				i++;
				continue;
			}
			i++;
			j++;
		}
		i++;
		nums[line][j] = '\0';
		line++;
	}
}

void	ft_extract_dict(char *file, char **nums, char **words)
{
	int		fd;
	char	c;
	int		i;
	char	*tmp;

	fd = open(file, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1) && c != EOF)
		i++;
	tmp = malloc((sizeof(char) * i));
	close(fd);
	fd = open(file, O_RDONLY);
	if (tmp == NULL)
		printf("Malloc Error!!");
	i = 0;
	while (read(fd, &c, 1) != 0)
		tmp[i++] = c;
	close(fd);
	ft_nums_to_tabs(tmp, nums, file);
	ft_words_to_tabs(tmp, words, file);
	free(tmp);
}
