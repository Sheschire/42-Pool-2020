/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:26:12 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 11:42:45 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char	c;
	(void)argv;

	c = '9';
	if (argc == 1)
 	{
		while (c >= '0')
		{
			write(1, &c, 1);
			c--;
		}
		write(1, "\n", 1);
	}
}
