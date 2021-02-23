/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 09:50:22 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/25 09:57:06 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (i > j)
	{
		tmp = str[i - 1];
		str[i - 1] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}

#include <stdio.h>

int main (int ac, char **av)
{
	printf("%s\n", ft_strrev(av[1]));
}
