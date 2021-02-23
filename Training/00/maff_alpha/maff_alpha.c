/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:49:26 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 11:54:41 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	even;
	char	odd;

	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		while (odd <= 'y')
		{
			write(1, &odd, 1);
			write(1, &even, 1);
			odd += 2;
			even += 2;
		}
	}
	write(1, "\n", 1);
}
