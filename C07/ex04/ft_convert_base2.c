/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 09:49:10 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/28 12:52:11 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_in_base(char c, char *base);
int		ft_baselen(char *base);

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[0] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[0] == '\0'\
				|| base[1] == '\0' || (base[i] >= 9 && base[i] <= 13)\
				|| base[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		res;
	int		minus;

	i = 0;
	res = 0;
	minus = 1;
	if (!ft_check_base(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (ft_is_in_base(str[i], base) > -1)
	{
		res = res * ft_baselen(base) + ft_is_in_base(str[i], base);
		i++;
	}
	return (res * minus);
}
