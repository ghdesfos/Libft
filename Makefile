# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 18:50:38 by ghdesfos          #+#    #+#              #
#    Updated: 2018/12/15 21:44:01 by ghdesfos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I. -c
SRC = *.c
OBJ = $(SRC:%.c=%.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) *.o
	ranlib $(NAME)

$(OBJ): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f *.gch

fclean: clean
	/bin/rm -rf $(NAME)

re : fclean all
