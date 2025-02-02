# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 14:49:04 by olyetisk          #+#    #+#              #
#    Updated: 2025/02/02 15:20:25 by olyetisk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = phonebook
SRC = main.cpp contact.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o) 
RM = rm -f
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re