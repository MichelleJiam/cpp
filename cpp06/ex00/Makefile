# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mjiam <mjiam@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/07 16:51:59 by mjiam         #+#    #+#                  #
#    Updated: 2020/09/10 15:19:24 by mjiam         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= 	convert

SRC		= 	main.cpp Convert.cpp

HEADER	= 	Convert.hpp

OBJ		= 	$(SRC:.cpp=.o)

CC		= 	clang++

FLAGS	= 	-Wall -Wextra -Werror -std=c++98

ifdef DEBUG
FLAGS	+=	-fsanitize=address -fno-omit-frame-pointer
endif

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

run:
	@$(MAKE)
	./$(NAME) 0
	@echo "-----------"
	./$(NAME) nan
	@echo "-----------"
	./$(NAME) -inf
	@echo "-----------"
	./$(NAME) 42.0f
	@echo "-----------"
	./$(NAME) c
	@echo "-----------"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

debug: $(OBJ) $(HEADER)
	@echo "$(BLUE)Debug mode: compiling with address sanitizer$(RESET)"
	@$(MAKE) DEBUG=1

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