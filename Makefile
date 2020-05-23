##
## EPITECH PROJECT, 2020
## tests_make
## File description:
## Makefile
##

SHELL	=	bash

SRC		=	src/main.c			\

OBJ		=	$(SRC:.c=.o)

NAME	=	a.out

CFLAGS	=	-I./include -Wextra -W -Wall -pedantic -fdiagnostics-color

LIBS	=	-L lib/my/ -lmy -L lib/color/ -lcolor -L lib/my_error/ -lerror -L lib/my_maths/ -lmaths

TEST_TARGET	=	unit_tests

TEST_LFLAGS	=	-lcriterion

SRC_TESTS	=	lib/color/tests/my_putcolor_tests.c

OBJ_TESTS	=	$(SRC_TESTS:.c=.o)

COVERAGE	=	$(SRC:.c=.gcda)				\
				$(SRC_TESTS:.c=.gcda)		\
				$(SRC:.c=.gcno)				\
				$(SRC_TESTS:.c=.gcno)

all:	$(NAME)

$(NAME): build_lib build

build_lib: ## Compile the libs
	@$(MAKE) -C lib/ --silent

lib_clean: ## Clean the libs
	@$(MAKE) clean -C lib/ --silent

lib_fclean: ## Force clean the libs
	@$(MAKE) fclean -C lib/ --silent

%.o: %.c ## Compile the objects
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "[\e[1;34mCompiled\e[0m] % 41s\n" $@ | tr ' ' '.'

build: $(OBJ) ## Build the main binary
	@$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBS)

clean: lib_clean ## Clean the project
	@rm -f $(OBJ) $(OBJ_TESTS) $(COVERAGE)

fclean: lib_fclean clean ## Force clean the project
	@rm -f $(NAME) $(TEST_TARGET)

re: fclean all ## Force clean then compile

valgrind:	CFLAGS += -g3
valgrind:	fclean	all ## Launch valgrind
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(TARGET)

tests_run: CFLAGS += --coverage ## Launch tests
tests_run: build_lib $(OBJ) $(OBJ_TESTS)
	@printf "\e[1;32mFinished compiling sources\e[0m\n"
	@$(CC) $(CFLAGS) $(OBJ) $(OBJ_TESTS) $(LIBS) -o $(TEST_TARGET) $(TEST_LFLAGS)
	@printf "\e[1;3;5;32m▀▄▀▄▀▄ Tests the code ▄▀▄▀▄▀\e[0m\n"
	@./$(TEST_TARGET)
	@gcovr --exclude lib/color/tests/
	@gcovr -b

re_tests: fclean tests_run ## Clean then tests

help: ## Help for the Makefile
	@cat $(MAKEFILE_LIST) | sed -En 's/^([a-zA-Z_-]+)\s*:.*##\s?(.*)/\1 "\2"/p' | xargs printf "\033[32m%-30s\033[0m %s\n"

.PHONY:	all build build_lib lib_clean lib_fclean clean fclean re tests_run re_tests valgrind help
