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
	@echo -e "\033[1;93mCompiling lib....\033[0;39m"
	@$(MAKE) -C my --silent
	@$(MAKE) -C color --silent
	@$(MAKE) -C my_error --silent
	@$(MAKE) -C my_maths --silent
	@echo -e "\033[1;32mLib successfully compiled !\033[0;39m"

clean: ## clean all lib
	@$(MAKE) clean -C my --silent
	@$(MAKE) clean -C color --silent
	@$(MAKE) clean -C my_error --silent
	@$(MAKE) clean -C my_maths --silent

fclean: clean goodbye ## delete the useless file and clean
	@$(MAKE) fclean -C my --silent
	@$(MAKE) fclean -C color --silent
	@$(MAKE) fclean -C my_error --silent
	@$(MAKE) fclean -C my_maths --silent

re: fclean all ## Clean then compile

tests_run: ## Launch tests
	@$(MAKE) tests -C my --silent
	@$(MAKE) tests -C color --silent

re_tests: fclean tests_run ## Clean then tests

re_valgrind: fclean ## Launch valgrind
	@$(MAKE) valgrind -C my --silent
	@$(MAKE) valgrind -C color --silent

help: ## Help for the Makefile
	@cat $(MAKEFILE_LIST) | sed -En 's/^([a-zA-Z_-]+)\s*:.*##\s?(.*)/\1 "\2"/p' | xargs printf "\033[32m%-30s\033[0m %s\n"

.PHONY:	all build clean fclean re tests_run re_tests re_valgrind help
