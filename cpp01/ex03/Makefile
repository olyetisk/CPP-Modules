NAME =m4a4
SRCS = main.cpp HumanA.cpp HumanB.cpp weapon.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRCS:.cpp=.o)
%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re: clean all

.PHONY:all re clean fclean