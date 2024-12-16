# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alassiqu <alassiqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 15:37:03 by alassiqu          #+#    #+#              #
#    Updated: 2024/12/12 16:04:32 by alassiqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	Brain

CXX			:=	c++ -std=c++98
CXXFLAGS	:=	-Wall -Wextra -Werror

RM			:=	rm -f

SRC			:=	Animal.cpp				\
				Cat.cpp					\
				Dog.cpp					\
				WrongAnimal.cpp			\
				WrongCat.cpp			\
				Brain.cpp				\
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
