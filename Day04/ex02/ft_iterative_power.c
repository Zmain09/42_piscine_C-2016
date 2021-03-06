/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:01:12 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/10 23:16:43 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nb2;

	nb2 = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		nb2 = nb2 * nb;
		power--;
	}
	return (nb2);
}
