/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:37:34 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 18:36:28 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char *str, char *charset)
{
	int		i;

	i = 0;
	while (*charset)
	{
		if (*charset == *str)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_word_len(char *str, char *charset)
{
	int		len;

	len = 0;
	while (str[len] && !(ft_is_sep(str + len, charset)))
		len++;
	return (len);
}

char	*ft_strndup(char *str, int i)
{
	int		j;
	char	*word_dup;

	j = 0;
	if (!(word_dup = (char *)malloc(sizeof(*word_dup) * i + 1)))
		return (0);
	while (j < i)
	{
		word_dup[j] = str[j];
		j++;
	}
	word_dup[j] = 0;
	return (word_dup);
}

int		ft_word_count(char *str, char *charset)
{
	int		i;
	int		nb_word;

	nb_word = 0;
	i = 0;
	while (*str)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		i = ft_word_len(str, charset);
		if (i)
			nb_word++;
		str += i;
	}
	return (nb_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nb_word = ft_word_count(str, charset);
	if (!(tab = (char **)malloc(sizeof(*tab) * nb_word + 1)))
		return (0);
	while (j < nb_word)
	{
		while (ft_is_sep(str, charset))
			str++;
		i = ft_word_len(str, charset);
		if (!(tab[j] = ft_strndup(str, i)))
			return (0);
		j++;
		str += i;
	}
	tab[j] = 0;
	return (tab);
}
