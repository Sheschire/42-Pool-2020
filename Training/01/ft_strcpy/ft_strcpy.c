/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:16:04 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/24 12:24:48 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int main()
{
	char	s1[52]; 
	char	s2[22] = "nicolasticot";
	printf("Chaine de depart: %s\nChaine copiee : %s\n", s2, ft_strcpy(s1, s2));
}
