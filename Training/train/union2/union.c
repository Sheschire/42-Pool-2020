/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 11:52:45 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 12:10:25 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		is_in_another(char *s1, char c)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_already(char *s1, int index)
{
	int		i;

	i = index - 1;
	while (i >= 0)
	{
		if (s1[i] == s1[index])
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
		if (!is_already(s2, i) && !is_in_another(s1, s2[i]))
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
