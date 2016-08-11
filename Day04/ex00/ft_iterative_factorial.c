/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 12:59:53 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/09 13:00:01 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int nb2;

	nb2 = nb - 1;
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	if (nb > 0)
	{
		while (nb2 > 0)
		{
			nb = nb * nb2;
			nb2--;
		}
		return (nb);
	}
	else
		return (0);
}
