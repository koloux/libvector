# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/30 17:55:34 by nhuber            #+#    #+#              #
#    Updated: 2016/06/30 18:06:43 by nhuber           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libvector.a
AR = ar rc
FILES = 
OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(FILES) && ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : all clean

.PHONY : all clean fclean re
