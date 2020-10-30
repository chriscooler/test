/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:13:02 by akotzky           #+#    #+#             */
/*   Updated: 2020/10/25 19:52:04 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char	**nums;
	char	**words;
	char	file[] = "numbers.dict";
	int		line;

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
	ft_extract_dict(file, nums, words);
	ft_print_number(argv[1], nums, words);
	return (0);
}
