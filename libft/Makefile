# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/26 13:19:41 by agraton           #+#    #+#              #
#    Updated: 2018/11/29 11:24:27 by agraton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
FLAG = -Wall -Wextra -Werror
INCLUDES = "includes"
OPTION = -c -I $(HEADER)
SRC = ft_memset.c ft_bzero.c ft_countwords.c ft_atol.c ft_isspace.c\
	  ft_memchr.c ft_memcpy.c ft_memcmp.c	ft_strlen.c ft_strdup.c ft_strcpy.c\
	  ft_strncpy.c ft_strcat.c ft_strncat.c ft_memccpy.c ft_memmove.c\
	  ft_strcmp.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strlcat.c \
	  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_itoa.c\
	  ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c\
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strstr.c \
	  ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_strnstr.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	  ft_lstiter.c ft_lstmap.c ft_strsplit.c ft_isupper.c ft_islower.c \
	  ft_putdou.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
