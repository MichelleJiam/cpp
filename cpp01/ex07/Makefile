# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mjiam <mjiam@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/04 12:57:16 by mjiam         #+#    #+#                  #
#    Updated: 2020/08/05 21:10:14 by mjiam         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= 	replace

SRC		= 	replace.cpp

TEST	= 	test

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
	@echo "Executable $(CYAN)$(NAME)$(RESET) made. Run one of the following tests:"
	@echo "--------------------------------------------------------------"
	@echo "|  make $(CYAN)test1$(RESET): s1 is \"thirty-five is\", s2 is \"old af is\"      |"
	@echo "|  make $(CYAN)test2$(RESET): s1 is \"Anything that\", s2 is \"Everything that\" |"
	@echo "|  make $(CYAN)test3$(RESET): s1 is \"against the natural order of things\"    |"
	@echo "               s2 is \"weird af and honestly kids these days\"  |"
	@echo "--------------------------------------------------------------"

test1: $(NAME)
	@echo "Running $(CYAN)$@$(RESET)$(BLUE)"
	./$(NAME) $(TEST) "thirty-five is" "old af is"
	diff $@ $(TEST).replace

test2: $(NAME)
	@echo "Running $(CYAN)$@$(RESET)$(BLUE)"
	./$(NAME) $(TEST) "Anything that" "Everything that"
	diff $@ $(TEST).replace

test3: $(NAME)
	@echo "Running $(CYAN)$@$(RESET)$(BLUE)"
	./$(NAME) $(TEST) "against the natural order of things" "weird af and honestly kids these days.."
	diff $@ $(TEST).replace

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(BLUE)Cleaning$(RESET)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(BLUE)Clean af$(RESET)"
	@rm -rf $(NAME) test.replace

re:
	@echo "$(BLUE)Once more from the top$(RESET)"
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re