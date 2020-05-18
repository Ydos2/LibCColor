##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

NORMAL = \033[0;39m

all:	build

goodbye:
	@echo -ne "\033[1;5;34m"
	@echo -e " ___   ___  ___  ___  ___       ___"
	@echo -e "/   | |   ||   ||   \|   / \ / |    "
	@echo -e "|   __|   ||   ||   ||---\  |  |--  "
	@echo -e "|___/ |___||___||___/|___/  |  |___$(NORMAL)"

build: ## compile all lib
	@make -C my
	@make -C color

clean: ## clean all lib
	@make clean -C my
	@make clean -C color

fclean: clean goodbye ## delete the useless file and clean
	@make fclean -C my
	@make fclean -C color

re: fclean all ## Clean then compile

tests_run: ## Launch tests
	@make tests -C my
	@make tests -C color

re_tests: fclean tests_run ## Clean then tests

re_valgrind: fclean ## Launch valgrind
	@make valgrind -C my
	@make valgrind -C color

help: ## Help for the Makefile
	@cat $(MAKEFILE_LIST) | sed -En 's/^([a-zA-Z_-]+)\s*:.*##\s?(.*)/\1 "\2"/p' | xargs printf "\033[32m%-30s\033[0m %s\n"

.PHONY:	all build clean fclean re tests_run re_tests re_valgrind help
