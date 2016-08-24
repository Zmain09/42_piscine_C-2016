/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 16:45:39 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/23 23:01:22 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
			ft_putstr("-2147483648");
		else
		{
			ft_putstr("-");
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		if (nb != -2147483648)
			ft_putchar(nb + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int i2;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_putstr(par[i].str);
		ft_putchar('\n');
		i2 = 0;
		while (par[i].tab[i2])
		{
			ft_putstr(par[i].tab[i2]);
			ft_putchar('\n');
			i2++;
		}
		par++;
	}
}
