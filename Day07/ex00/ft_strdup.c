/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:21:55 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/21 12:01:39 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str++ != '\0')
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *m;

	m = malloc(ft_strlen(src) + 1);
	if (m != 0)
		ft_strcpy(m, src);
	return (m);
}
