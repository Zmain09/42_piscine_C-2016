/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:37:40 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/23 22:50:30 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int				n;

	n = 0;
	while (*str++ != '\0')
		n++;
	return (n);
}

char				*ft_strcpy(char *dest, char *src)
{
	int				i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char				*ft_strdup(char *src)
{
	char			*m;

	m = malloc(ft_strlen(src) + 1);
	if (m != 0)
		ft_strcpy(m, src);
	return (m);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*stock;

	i = 0;
	stock = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!stock)
		return (0);
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
