/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 16:55:24 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/20 21:24:51 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *mloc;
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	mloc = (int *)malloc(sizeof(*mloc) * ((max - min)));
	while (min < max)
	{
		mloc[i] = min;
		i++;
		min++;
	}
	*range = mloc;
	return (i);
}
