/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:38:56 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/29 12:15:37 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_calculate_memory(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		res;

	i = 0;
	j = 0;
	res = 0;
	while (i < size)
	{
		while (strs[i][j])
			j++;
		res += j;
		j = 0;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	res += (i * (size - 1));
	if (size <= 0)
		res = 1;
	if (!(tab = (char *)malloc(sizeof(*strs) * res + 1)))
		return (0);
	return (tab);
}

char	*ft_joined_tab(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		t;
	char	*tab;

	i = -1;
	t = -1;
	tab = ft_calculate_memory(size, strs, sep);
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			tab[++t] = strs[i][j];
		j = -1;
		if (i != (size - 1))
			while (sep[++j])
				tab[++t] = sep[j];
	}
	tab[++t] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	return (ft_joined_tab(size, strs, sep));
}

int	main()
{
	int size = 5;
	char *tab[5];
	tab[0] = "Hello";
	tab[1] = "there";
	tab[2] = "general";
	tab[3] = "";
	tab[4] = "Kenobi";


	char *sep = "COUILLE";

	printf("%s\n", ft_strjoin(size, tab, sep));

	return (0);
}

