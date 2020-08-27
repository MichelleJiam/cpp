# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mjiam <mjiam@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/04 12:57:16 by mjiam         #+#    #+#                  #
#    Updated: 2020/08/27 17:36:39 by mjiam         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= 	fantasy

SRC		= 	main.cpp AMateria.cpp Character.cpp Cure.cpp \
			Ice.cpp MateriaSource.cpp

HEADER	= 	AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp \
			IMateriaSource.hpp MateriaSource.hpp

OBJ		= 	$(SRC:.cpp=.o)

CC		= 	clang++

FLAGS	= 	-Wall -Wextra -Werror -std=c++98

# COLORS
CYAN	= 	\033[0;36m
PURPLE	= 	\033[0;35m
BLUE	= 	\033[0;34m
RESET	= 	\033[0m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@echo "Compiling: $(PURPLE)$(SRC)$(RESET)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "Executable $(CYAN)$(NAME)$(RESET) made"

run: $(NAME)
	@./$(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(BLUE)Cleaning$(RESET)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(BLUE)Clean af$(RESET)"
	@rm -rf $(NAME)

re:
	@echo "$(BLUE)Once more from the top$(RESET)"
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re