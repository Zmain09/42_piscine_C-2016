/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:32:44 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/20 18:07:07 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*mloc;
	int		i;

	if (min >= max)
		return (0);
	i = 0;
	mloc = (int *)malloc(sizeof(*mloc) * ((max - min)));
	while (min < max)
	{
		mloc[i] = min;
		i++;
		min++;
	}
	return (mloc);
}
