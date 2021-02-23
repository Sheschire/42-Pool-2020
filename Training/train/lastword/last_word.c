/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:18:49 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 12:29:33 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_space(char c)
{
	if (c == 9 || c == 32)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (is_space(*av[1]) && *av[1])
			av[1]--;
		while (!is_space(*av[1]) && *av[1])
			av[1]--;
		av[1]++;
		while (!is_space(*av[1]) && *av[1])
		{
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
