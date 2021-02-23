/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:54:42 by tlemesle          #+#    #+#             */
/*   Updated: 2020/09/26 14:27:14 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_mod_len(int len, char *str)
{
	len = ft_strlen(str);

	while (len >= 0)
	{
		if (len % 3 == 0)
		{
			*str = nouveau trio;
			*str = est une centaine;
			str++;
		}
		if (len % 3 == 2)
		{
			*str = est une dizaine;
			str++;
		}
		if (len % 3 == 1)
		{
			*str = est une unite;
			str++;
		}
		len--;
	}
}
