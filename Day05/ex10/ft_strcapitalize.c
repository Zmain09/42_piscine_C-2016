/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 23:34:56 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/11 13:03:34 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (i2 == 1)
				str[i] = str[i] - 32;
			i2 = 0;
		}
		else if (str[i] > 47 && str[i] < 58)
			i2 = 0;
		else
			i2 = 1;
		i++;
	}
	return (str);
}
