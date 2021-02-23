/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:24:57 by tlemesle          #+#    #+#             */
/*   Updated: 2020/10/01 15:40:20 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calcul_memory(int nbr)
{
	unsigned int nb2;
	int		res;

	res = 0;
	if (nbr < 0)
	{
		res++;
		nbr = -nbr;
	}
	nb2 = nbr;
	while (nb2 > 9)
	{
		nb2 /= 10;
		res++;
	}
	res++;
	return (res);
}

char	*ft_int_to_char(int nbr, int size, char *str)
{
	unsigned int nb2;

	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	nb2 = nbr;
	str[size] = '\0';
	while (size > ((nbr < 0) ? 1 : 0) && nb2 > 0)
	{
		size--;
		str[size] = (nb2 % 10) + '0';
		nb2 /= 10;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		size;
	char	*str;

	size = ft_calcul_memory(nbr);
	if (!(str = (char *)malloc(sizeof(*str) * size + 1)))
		return (0);
	str = ft_int_to_char(nbr, size, str);
	return (str);
}

int main()
{
	int nbr = -1234567;
	printf("%s\n", ft_itoa(nbr));
}
