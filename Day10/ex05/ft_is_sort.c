/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:41:03 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/24 13:47:54 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (i < length - 1 && result <= 0)
	{
		result = f(tab[i], tab[i + 1]);
		i++;
	}
	if (result <= 0)
		result = 1;
	else
		result = 0;
	return (result);
}
