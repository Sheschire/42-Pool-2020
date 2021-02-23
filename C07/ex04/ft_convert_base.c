/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:34:50 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/28 12:52:14 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_baselen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		ft_is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_len_result(int nbr, char *base_to)
{
	int				reslen;
	int				i;
	unsigned int	base_size;
	unsigned int	nb2;

	reslen = 0;
	i = 0;
	base_size = ft_baselen(base_to);
	if (nbr < 0)
	{
		reslen++;
		nb2 = nbr * -1;
	}
	else
		nb2 = nbr;
	while (nb2 >= base_size)
	{
		reslen++;
		nb2 = nb2 / base_size;
	}
	return (++reslen);
}

void	ft_int_to_char(int nbr, char *base_to, char *res)
{
	unsigned int	nb2;
	unsigned int	lenresult;

	lenresult = ft_len_result(nbr, base_to);
	if (nbr < 0)
	{
		res[0] = '-';
		nb2 = nbr * -1;
	}
	else
		nb2 = nbr;
	res[lenresult] = '\0';
	while (lenresult > (nbr < 0 ? 1 : 0))
	{
		lenresult--;
		res[lenresult] = (base_to[nb2 % ft_baselen(base_to)]);
		nb2 = nb2 / ft_baselen(base_to);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			nombre;
	char		*res;
	int			lenresult;

	nombre = 0;
	if ((!ft_check_base(base_from) || !ft_check_base(base_to) || !nbr))
		return (0);
	nombre = ft_atoi_base(nbr, base_from);
	lenresult = ft_len_result(nombre, base_to);
	if (!(res = (char *)malloc(sizeof(*res) * lenresult + 1)))
		return (0);
	ft_int_to_char(nombre, base_to, res);
	return (res);
}
