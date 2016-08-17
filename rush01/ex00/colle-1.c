/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edebise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 15:38:59 by edebise           #+#    #+#             */
/*   Updated: 2016/08/14 15:39:02 by edebise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_grilen(char **str)
{
	int y;
	int	x;
	int n;

	n = 0;
	y = 1;
	while (str[y] != '\0')
	{
		x = 0;
		while (str[y][x] != '\0')
		{
		x++;
		n++;
		}
		y++;
	}
	ft_putnbr(n); // Test
	ft_putchar('\n'); // Test
	if (n == 81)
		return (1);
	return (0);
}

void	ft_putgril(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n++]);
		if (n < 9)
			ft_putchar(' ');
	}
}

int test_l(char **line, int y)
{
	int	x;
	int z;

	x = 0;
	while ((x < 9) && (line[y][x] >= '1') && (line[y][x] <= '9'))
	{
		if ((line[y][x] >= '1') && (line[y][x] <= '9'))
		{
			z = x + 1;
			while(z < 9)
			{
				if (line[y][x] == line[y][z])
				{
					//ft_putstr("Doublon Line"); // Test
					return (0);
				}
				z++;
			}
		}
		x++;
	}
	return (1);
}

int test_c(char **col, int x)
{
	int	y;
	int z;

	y = 1;
	while ((y < 10) && (col[y][x] >= '1') && (col[y][x] <= '9'))
	{
		if ((col[y][x] >= '1') && (col[y][x] <= '9'))
		{
			z = y + 1;
			while(z < 10)
			{
				if (col[y][x] == col[z][x])
				{
					//ft_putstr("Doublon col"); // Test
					return (0);
				}
				z++;
			}
		}
		y++;
	}
	return (1);
}

int	test(char **grille, int y, int x)
{
	return (test_l(grille, y) * test_c(grille, x));
}

int	sudoku(char **grille)
{
	int n;

	n = 1;
	while (n < 10)
	{
		ft_putgril(grille[n]);
		ft_putchar('\n');
		n++;
	}
		ft_putchar('\n');

	int x;
	int y;
	int	z;
	y = 1;
	z = '1';
	while (y <= 9)
	{
		x = 0;
		while (x <=8)
		{
			if (grille[y][x] == '.')
			{
				while (z <= '9')
				{
					grille[y][x] = z;
					if (test (grille, y, x) == 0)
					{
						if (z == '9')
						{
							grille[y][x] = '.';
							return (0);
						}
					}
					else
						sudoku(grille);
					z++;
				}
			}
			x++;
		}
		y++;
	}
return (0);
}

int		main(int argc, char **argv)
{
	int n;
	int	y;
	int x;

	if ((argc == 10) && (ft_grilen(argv)))
	{
		y = 1;
		while (y < 10)
		{
			if (test_l(argv, y) == 0)
				return(0);
			y++;
		}

		x = 0;
		while (x < 10)
		{
			if (test_c(argv, x) == 0)
				return(0);
			x++;
		}

		sudoku(argv);

		n = 1;
		while (n < argc)
		{
			ft_putgril(argv[n]);
			ft_putchar('\n');
			n++;
		}
	}
	else
		ft_putstr("Erreur\n");
		return(0);
	return (0);
}
