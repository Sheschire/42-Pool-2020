/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:41:07 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/16 18:55:24 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res *= (nb - 1);
		nb--;
	}
	return (res);
}
