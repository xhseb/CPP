NAME =		Brain

CC =		clang++

CXXFLAGS =	-std=c++98 -Wall -Wextra -Werror

SRC =		main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SRC_PATH =	$(addprefix ./srcs/, $(SRC))

OBJ = 	$(SRC_PATH:.cpp=.o)

INC_PATH = 	./includes

all :		$(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CXXFLAGS) -I $(INC_PATH) -o $@ $^

clean :
			rm -f $(OBJ)

fclean :	clean
			rm -f $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
