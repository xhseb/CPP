NAME =		Fixed

CC =		clang++

CXXFLAGS =	-std=c++98 -Wall -Wextra -Werror

SRC =		main.cpp Fixed.cpp

OBJ = 		$(SRC:.cpp=.o)

all :		$(NAME)

$(NAME) : $(OBJ)
		 $(CC) $(CXXFLAGS) -o $@ $^

clean :
			rm -f $(OBJ)

fclean :	clean
			rm -f $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
