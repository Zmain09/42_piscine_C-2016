# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjauze <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 19:04:46 by vjauze            #+#    #+#              #
#    Updated: 2016/08/24 13:28:55 by vjauze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
		 ./srcs/ft_strlen.c ./srcs/ft_swap.c

OFILE = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o \
		./ft_swap.o

HEADER = ./includes

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCE) -I $(HEADER) && ar rc $(NAME) $(OFILE) \
	&& ranlib $(NAME)

clean:
	/bin/rm -rf $(OFILE)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
