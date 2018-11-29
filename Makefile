# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 10:31:36 by agraton           #+#    #+#              #
#    Updated: 2018/11/29 10:38:13 by agraton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf
HEADER = ft_printf.h
FLAG = -Wall -Wextra -Werror
OPTION = -o $(NAME) -I $(HEADER)
SRC = main.c handles.c libft/libft.a
OBJ = main.o handles.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAG) $(OPTION) $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
