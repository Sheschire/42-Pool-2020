/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:03:42 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/25 14:31:49 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_in_another(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_already(char *str, int index)
{
	int		i;

	i = index - 1;
	while (i >= 0)
	{
		if (str[i] == str[index])
			return (1);
		i--;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (!is_already(s1, i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!is_in_another(s1, s2[i]) && !is_already(s2, i))
			write(1, &s2[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}
