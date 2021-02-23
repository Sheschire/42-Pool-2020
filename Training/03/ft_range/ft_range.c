/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 10:32:38 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/25 10:53:48 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*tab;
	int		n;
	int		i;
	
	i = 0;
	if (end > start)
		n = end - start;
	else if (start > end)
		n = start - end;
	else if (start == end)
		n = 0;
	if (!(tab = (int *)malloc(sizeof(*tab) * (n))))
		return (0);
	while (end != start)
	{
		if (end > start)
		{
			tab[i] = start;
			i++;
			start++;
		}
		else if (start > end)
		{
			tab[i] = end;
			i++;
			end++;
		}
	}
	return (tab);
}

#include <stdio.h>

int		main()
{
	int	start = 1;
	int	end = 3;
	int	i = end - start;

	while (i)
	{
		printf("%d", *ft_range(start, end));
		i--;
	}
}
