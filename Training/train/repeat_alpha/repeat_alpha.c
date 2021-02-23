/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:57:23 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 11:12:40 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_calcul(char c)
{
	int		i;

	if (c >= 'A' && c <= 'Z')
		i = c - 64;
	if (c >= 'a' && c <= 'z')
		i = c - 96;
	return (i);
}

int		main(int ac, char **av)
{
	int		i;

	if (ac == 2)
	{
		while (*av[1])
		{
			i = ft_calcul(*av[1]);
			while (i)
			{
				write(1, av[1], 1);
				i--;
			}
			av[1]++;
		}
	}
	write(1 , "\n", 1);
}
