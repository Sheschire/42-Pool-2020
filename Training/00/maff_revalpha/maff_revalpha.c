/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:10:56 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 12:14:51 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	even;
	char	odd;

	even = 'z';
	odd = 'Y';
	while (even >= 'b')
	{
		while (odd >= 'A')
		{
			write(1, &even, 1);
			write(1, &odd, 1);
			even -= 2;
			odd -= 2;
		}
	}
	write(1,"\n", 1);
}
