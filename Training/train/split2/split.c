/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:46:40 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 18:36:31 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	if (c == 9 || c == 32)
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int		i;
	while (str[i] && !is_space(str + i))
		i++;
	return (i);
}

int		ft_calcul_memory(char *str)
{
	int		nb_word;
	int		i;

	nb_word = 0;
	i = 0;
	while (str[i])
	{
		while (is_space(*str))
			str++;
		while (!is_space(str[i]))
			i++;
		nb_word++;
		str += i;
	}
	return (nb_word);
}

char	**ft_split(char *str)
{
	int		nb_word;
	char	**res;
	int		j;

	j = 0;
	nb_word = ft_calcul_memory(str);
	if (!(str = (char **)malloc(sizeof(**res) * (nb_word + 1))))
		return (0);
	while (j < nb_word)
	{
		while (is_space(str))
			str++;
		i = ft_strlen(str);
		if (!(tab[j] = ft_strndup(str, i)))
			return (0);
		j++;
		str += i;
	}
	tab[j] = 0;
	return (tab);
}
