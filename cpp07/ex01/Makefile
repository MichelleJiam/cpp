# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mjiam <mjiam@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/07 16:51:59 by mjiam         #+#    #+#                  #
#    Updated: 2020/09/17 15:39:05 by mjiam         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= 	iter

SRC		= 	iter.cpp

HEADER	= 	

OBJ		= 	$(SRC:.cpp=.o)

CC		= 	clang++

FLAGS	= 	-Wall -Wextra -Werror -std=c++98

ifdef AWESOME
SRC		+= 	Awesome.cpp
HEADER	+= 	Awesome.hpp
endif

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
	@./$(NAME)

awesome: $(OBJ)
	@$(MAKE) AWESOME=1
	@./$(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

debug: $(OBJ) $(HEADER)
	@echo "$(BLUE)Debug mode: compiling with address sanitizer$(RESET)"
	@$(MAKE) DEBUG=1

clean:
	@echo "$(BLUE)Cleaning$(RESET)"
	@rm -rf $(OBJ) Awesome.o

fclean: clean
	@echo "$(BLUE)Clean af$(RESET)"
	@rm -rf $(NAME)

re:
	@echo "$(BLUE)Once more from the top$(RESET)"
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all run debug clean fclean re