/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:52:52 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/13 15:59:37 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	argc = 1;
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]);
		argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}
