/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:44:13 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/22 21:23:56 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_words(char **tab, char *str, int a, int len)
{
	int		i[4];

	while (str[a])
	{
		i[3] = a;
		while ((str[a] < 9 || str[a] > 11) && str[a] != ' ' && str[a] != '\0')
			a++;
		if (i[3] != a)
		{
			len++;
			tab[len] = malloc(sizeof(char *) * (a - i[3]));
			i[1] = 0;
			while (i[3] + i[1] != a)
			{
				tab[len][i[1]] = str[i[3] + i[1]];
				i[1]++;
			}
			tab[len][i[1]] = '\0';
		}
		while ((str[a] > 8 && str[a] < 12) || str[a] == ' ')
			a++;
	}
	tab[len + 1] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		len;
	char	**tab;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (((str[i] < 9 || str[i] > 11) && str[i] != ' ' && str[i] != '\0'))
			i++;
		while ((str[i] > 8 && str[i] < 12) || str[i] == ' ')
			i++;
		len++;
	}
	tab = malloc(sizeof(char **) * (len + 1));
	i = 0;
	len = -1;
	tab = ft_words(tab, str, i, len);
	return (tab);
}
