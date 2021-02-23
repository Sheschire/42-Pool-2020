/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 15:14:53 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/25 15:26:17 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char *str, char *charset)
{
	while (*charset)
	{
		if (*charset == str)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_word_count(char *str, char *charset)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && is_sep(str[i], charset))
			str++;
		while (*str && !is_sep(str[i], charset))
			i++;
		nb_word++;
	}
}

char 	**ft_split(char *str, char *charset)
{
	int		nb_word;
}
