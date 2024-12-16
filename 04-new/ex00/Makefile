NAME		:=	Animal

CXX			:=	c++ -std=c++98
CXXFLAGS	:=	-Wall -Wextra -Werror

RM			:=	rm -f

SRC			:=	Animal.cpp				\
				Cat.cpp					\
				Dog.cpp					\
				WrongAnimal.cpp			\
				WrongCat.cpp			\
				main.cpp

OBJ			:=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	clean
