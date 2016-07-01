# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/30 17:55:34 by nhuber            #+#    #+#              #
#    Updated: 2016/07/01 18:04:50 by nhuber           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libvector.a
AR = ar rc
FILES = vector_construct.c \
		vector_resize.c \
		vector_add.c \
		vector_delone.c \
		vector_destruct.c
OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME) :
	@$(CC) $(FLAGS) -c $(FILES) && ar rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : all clean

.PHONY : all clean fclean re
