/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:21:20 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/25 11:46:13 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i =0;
	while (av[1][i])
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			av[1][i] += 32;
		i++;
	}
	printf("%s", av[1]);
}
