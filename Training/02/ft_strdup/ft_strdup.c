/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 17:08:39 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 17:14:04 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(dup) = (char *)malloc(sizeof(*dup) * (i + 1)))
		return (0);
	while (src[j])
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
