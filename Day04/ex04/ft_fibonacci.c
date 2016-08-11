/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:02:23 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/09 13:02:28 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 46)
		return (0);
	else if (index <= 1)
		return (index);
	else
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
