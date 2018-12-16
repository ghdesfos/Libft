# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 18:50:38 by ghdesfos          #+#    #+#              #
#    Updated: 2018/11/14 16:31:46 by ghdesfos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
SRC = *.c
HEADER = libft.h
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -f *.gch

fclean: clean
	/bin/rm -rf $(NAME)

re : fclean all
