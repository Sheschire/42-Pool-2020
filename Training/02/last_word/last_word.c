/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:28:01 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 19:06:05 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_space(char c)
{
	if (c == 32 || c == 9)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{	
	int		i;

	i = 0;
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
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
}
