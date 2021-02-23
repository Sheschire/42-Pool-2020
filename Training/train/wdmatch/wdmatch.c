/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:32:35 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/25 14:50:06 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;
	int		cmpt;

	i = 0;
	j = 0;
	cmpt = 0;
	while (s1[i])
		i++;
	while (*s2)
	{
		if (*s2 == s1[j])
		{
			cmpt++;
			j++;
		}
		s2++;
	}
	j = 0;
	if (cmpt == i)
		while (s1[j])
			write(1, &s1[j++], 1);
}

int 	main(int ac, char **av)
{
	if (ac == 3)
		ft_wdmatch(av[1], av[2]);
	write(1, "\n", 1);
}
