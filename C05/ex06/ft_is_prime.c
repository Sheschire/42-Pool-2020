/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:40:34 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/17 12:19:52 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_div(unsigned int nb, unsigned int div)
{
	if ((nb % div) == 0)
		return (0);
	if ((div * div) > nb)
		return (1);
	return (ft_div(nb, div + 1));
}

int		ft_is_prime(int nb)
{
	unsigned int div;

	div = 2;
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	return (ft_div((unsigned int)nb, div));
}
