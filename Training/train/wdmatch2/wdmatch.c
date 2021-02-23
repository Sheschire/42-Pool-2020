/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:30:13 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 12:46:10 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int		i;
	int		cmpt;
	int		j;

	j = 0;
	cmpt = 0;
	i = 0;
	while (s1[i])
		i++;
	while (*s2 && cmpt < i)
	{
		if (s1[cmpt] == *s2)
			cmpt++;
		s2++;
	}
	if (cmpt == i)
		write(1, s1, i);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
}
