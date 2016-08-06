/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 16:11:36 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/06 16:11:39 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(char begin, char mid, char end, int siz)
{
	ft_putchar(begin);
	while ((siz - 1) > 1)
	{
		ft_putchar(mid);
		siz--;
	}
	if (siz > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	if (x > 0 && y > 0)
	{
		draw_line('A', 'B', 'C', x);
		while ((y - 1) > 1)
		{
			draw_line('B', ' ', 'B', x);
			y--;
		}
		if (y > 1)
			draw_line('C', 'B', 'A', x);
	}
}
