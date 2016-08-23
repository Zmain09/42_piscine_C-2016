/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 16:55:48 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/22 21:25:51 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			size_words(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	result = (char *)malloc(sizeof(*result) * (size_words(argc, argv) + 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			result[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
		{
			result[k++] = '\n';
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}
