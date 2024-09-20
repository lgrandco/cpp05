NAME = Bureaucrat

SRC = main.cpp colors.cpp Bureaucrat.cpp Form.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

CC = cc
CXX = c++

CFLAGS = -Wall -Wextra -Werror -MMD -MP -g3
CXXFLAGS = $(CFLAGS) --std=c++98

RM = rm -f

all : $(NAME)

$(NAME) : ${OBJ} Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) -g3 $(OBJ)

clean :
	$(RM) $(NAME) $(OBJ) $(DEPS)

fclean : clean
	$(RM) $(NAME)

-include $(DEPS)

re : fclean all

.PHONY : all clean fclean re
