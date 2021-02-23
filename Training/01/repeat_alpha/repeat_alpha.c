/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:28:32 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 13:41:54 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_calcul(char c)
{
	int		i;

	i = 1;
	if (c >= 'A' && c <= 'Z')
		i = c - 63;
	if (c >= 'a' && c <= 'z')
		i = c - 95;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		while (*argv[1])
		{
			i = ft_calcul(*argv[1]);
			while (i)
			{
				write(1, argv[1], 1);
				i--;
			}
			
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
