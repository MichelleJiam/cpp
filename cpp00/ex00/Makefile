# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mjiam <mjiam@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 20:26:41 by mjiam         #+#    #+#                  #
#    Updated: 2020/07/30 10:12:09 by mjiam         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp

OBJ		= $(SRC:.cpp=.o)

CC		= clang++

FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling: $(SRC)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "Executable $(NAME) made"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "Cleaning"
	@rm -rf $(OBJ)

fclean: clean
	@echo "Clean af"
	@rm -rf $(NAME)

re:
	@echo "Once more from the top"
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re