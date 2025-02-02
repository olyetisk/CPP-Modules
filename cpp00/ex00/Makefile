# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/26 14:37:26 by olyetisk          #+#    #+#              #
#    Updated: 2025/02/02 14:10:37 by olyetisk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

CPP			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:clean

re: clean all

.PHONY:all re clean fclean