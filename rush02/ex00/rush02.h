/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akotzky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 11:19:19 by akotzky           #+#    #+#             */
/*   Updated: 2020/10/25 17:23:47 by akotzky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#ifndef RUSH02_H
# define RUSH02_H

void	ft_malloc_tabs(char *file, char **nums, char **words);
void	ft_words_to_tabs(char *tmp, char **words, char *file);
void	ft_nums_to_tabs(char *tmp, char **nums, char *file);
void	ft_extract_dict(char *file, char **nums, char **words);

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_count_chars_line(int index, char *file);

int		ft_strcmp(char *s1, char *s2);
void	ft_print_stack(char *number, char **nums, char **words);
void 	ft_print_words(char *str, char **nums, char **words);
void 	ft_print_number(char *number, char **nums, char **words);

int		ft_error_check_number(char *number);

#endif
