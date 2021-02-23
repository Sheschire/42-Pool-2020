/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 09:27:42 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 12:57:05 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int 	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (*av[2] == '+')
			printf("%d\n", atoi(av[1]) + atoi(av[3]));
		if (*av[2] == '%')
			printf("%d\n", atoi(av[1]) % atoi(av[3]));
		if (*av[2] == '-')
			printf("%d\n", atoi(av[1]) - atoi(av[3]));
		if (*av[2] == '*')
			printf("%d\n", atoi(av[1]) * atoi(av[3]));
		if (*av[2] == '/')
			printf("%d\n", atoi(av[1]) / atoi(av[3]));
	}
	else
		write(1, "\n", 1);
}
