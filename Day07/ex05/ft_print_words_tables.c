/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 16:56:34 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/21 02:02:17 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int i2;

	i = 0;
	while (tab[i])
	{
		i2 = 0;
		while (tab[i][i2])
		{
			ft_putchar(tab[i][i2]);
			i2++;
		}
		ft_putchar('\n');
		i++;
	}
}
