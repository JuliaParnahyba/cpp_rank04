# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 11:46:56 by jparnahy          #+#    #+#              #
#    Updated: 2025/02/03 11:53:16 by jparnahy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#name of the executable
NAME = run.a

#compiler and flags
CPP = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

#source files
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

#rules
all: $(NAME)

#compiling
$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

#object cleaning
clean:
	rm -f $(OBJ)

#object and executable cleaning
fclean: clean
	rm -f $(NAME)

#recompiling
re: fclean all

#to avoid conflicts with files named clean, fclean and re
.PHONY: all clean fclean re

